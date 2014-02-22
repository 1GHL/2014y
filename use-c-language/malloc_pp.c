#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tt{
  struct tt *next;
  void * d;
}tp;
void *p;
void * pp(tp *t)
{
  tp * p;

 star :
  if(t == NULL )
    {
      t =(tp *) malloc(sizeof(tp));
      goto star;
    }
  t->d = malloc(100);
  p = (tp *)malloc(sizeof(tp));
  t->next = p ;
  p->next = NULL;
  p->d = NULL;
  return t->d;

}

#define init(x) static char *x 
int main()
{
  void *p2;
  tp p1;
  tp *p;
  //  init(k);
  //  static tp *p1;
  //  p1 = (tp *)malloc(sizeof(tp));
  printf("%d\n",sizeof(tp));
  p = &p1;
  p2=pp(p);

  free(p2);
  free(p);
  p =NULL ;
  return 0;
}
