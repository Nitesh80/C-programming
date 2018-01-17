#include<stdio.h>
#include<conio.h>

int notoprint(int);
int main()
{
  int n=1;
  printf("no are -");
  notoprint(n);
  printf("\n");
  return 0;
}
int notoprint(int n)
{
  if(n<=50)
  {
    printf("%d ",n);
    notoprint(n+1);
  }
  return 1;
}
