#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>

int main(int argc, char **argv)
{
  int ret = 0;
  int readfd;
  char buf[10240] = {0,};
  char *pstr = NULL;

  if(argc == 2)
    {
      readfd = open(argv[1], O_RDONLY);
    }
  else
    {
      readfd = open("/dev/stdout", O_RDONLY);
    }

  if(readfd < 0)
    {
      fprintf(stderr,"[%d]open error %d\n", errno, readfd, argv[1]);
      return -1;
    }

  fprintf(stderr, "open %d \n", readfd);

  ret = fcntl(readfd, F_SETFL, fcntl(readfd, F_GETFD, 0)|O_NONBLOCK);
  if(ret == -1)
    {
      fprintf(stderr,"change %d error\n",readfd);
    }

  pstr = buf ;
  ret = 0 ;
  while(readfd > 0)
    {
      errno = 0;
      ret = read(readfd, pstr, sizeof(buf));
      if(ret == -1 && errno == 11)
	{
	  fprintf(stderr, "[%d]blocking[%d]\n",readfd);
	  continue ;
	}
      
      if(ret > 0 && ret < 1024)
	{
	  pstr += ret ;
	  continue ;
	}
      
      if(ret >= 1024)
	{
	  pstr += ret ;
	  break ;
	}
      if(ret == 0)
	{
	  fprintf(stderr, "[%d]file is end\n", readfd);
	  break ;
	}
      
    }
  
  fprintf(stderr,"read:\n%s\n",buf);
  close(readfd);
  return 0;
  
}
