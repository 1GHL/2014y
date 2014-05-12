#include <stdio.h>
#include <stdlib.h>
#include "trancode.h"


typedef int (*fpa)(int a) ;


// typedef void (*fp)();//自定义一个函数指针类型
//        fp b[]={t1,t2,t3}; //利用自定义类型fp把b[]定义趁一个指向函数的指针数组
//        b[0]();//现在利用指向函数的指针数组进行下标操作就可以进行函数的间接调用了;

int main(int argc ,char **argv)
{


  fpa alist[3]={NULL,};
  fpa blist[3]={NULL,};
  alist[0]=prc_a1 ;
  alist[1]=prc_a2;
  alist[2]=prc_a3;

  blist[0]=prc_b1;
  blist[1]=prc_b2;
  blist[2]=prc_b3;

  if(argc == 4)
    {
      alist[atoi(argv[1])](atoi(argv[3]));
      blist[atoi(argv[2])](atoi(argv[3]));
      return 0;
    }
  
  return 0;
}
