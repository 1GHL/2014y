#include <stdio.h>
#include <stdlib.h>

void trancode_5004_(char *buf)
{
    printf("my 5004\n");
}


void trancode_5001_(char *buf)
{
    printf("my 5001\n");
}


void trancode_5002_(char *buf)
{
    printf("my 5002\n");
}

#define DELEGATE_STREAM_REQ(method)                     \
    do{                                                 \
        trancode_##method##_(method);                   \
    } while (0)
 int main(int argc,char **argv)
 {
     if(argc == 2)
     {
         printf("argv %s\n",argv[1]);
         //    trancode_##argv[1]##(argv[1]);
     }
     DELEGATE_STREAM_REQ(5004);
     DELEGATE_STREAM_REQ(5002);
     DELEGATE_STREAM_REQ(5001);
     return 0;
}