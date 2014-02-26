#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int decode(char *dest,const char *src,char key)
{
  size_t len;
  int i;
  
  len = strlen(src);
  printf("len[%d]\t",len);
  for(i=0 ;i<len ;i++)
    {
     dest[i] = ~(src[i]^key);
    }

  return i;
}

int main(int argc,char **argv)
{

  char key1 = 0xab;
  char key2 = 0xdc;
  char buf1[1024]={0,};
  char buf2[1024]={0,};
  char buf3[1024]={0,};

  if(argc != 2)
    {
      printf("uages: value [%d]\n");
      return -1;
    }
  
  printf("1[%d]\n",decode(buf1,argv[1],key1));
  printf("2[%d]\n",decode(buf2,buf1,key2));
  printf("3[%d]\n",decode(buf3,buf2,key1));
  printf("4[%d]\n",decode(buf2,buf3,key2));

  printf("argv[%s]\n",argv[1]);
  printf("buf1[%s]\n",buf1);
  printf("buf2[%s]\n",buf2);
  printf("buf3[%s]\n",buf3);
  
  
  return 0;
}
