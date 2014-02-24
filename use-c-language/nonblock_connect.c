#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int setnonblocking(int fd)
{
  if(fcntl(fd, F_SETFL, fcntl(fd, F_GETFD, 0)|O_NONBLOCK) == -1)
    {
      return -1;
    }
  return 0;
}


int main(int argc, char **argv)
{
  int  sockfd ;
  struct sockaddr_in servaddr ;
  int ret ;
  fd_set writefds ;
  int len = sizeof(int);
  int error ;

  if(argc == 2)
    {
      printf("error please enter ip\n");
      return 1;
    }

  sockfd = socket(AF_INET, SOCK_STREAM, 0);
  
  ret = setnonblocking(sockfd);
  if(ret == -1)
    {
      abort();
    }
  
  bzero(&servaddr, siwritefds)zeof(servaddr));
  servaddr.sin_family = AF_INET ;
  servaddr.sin_port = htons(80) ;
  inet_pton(AF_INET, argv[1], &servaddr.sin_addr);
  if(connect(sockfd, (struct sockadd *)&servaddr, sizeof(servaddr)) == -1)
    {
      if(errno == EINPROGRESS)
	{
	  FD_ZERO(&writefds);
	  FD_SET(sockfd, &writefds);
	  if(select(sockfd+1, NULL, &writefds, NULL, NULL) >0 )
	    {
	      getsockopt(sockfd, SOL_SOCKET, SO_ERROR, &error, &len);
	      
	      if(error ==0)
		{
		  return 0;
		}
	      else
		{
		  return -1;
		}
	    }
	  else
	    {
	      return -1;
	    }


	}
    }
  else
    {
      return -1;
    }
close(sockfd);
return 0;
  

}
