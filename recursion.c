#include<stdio.h>
#include<conio.h>

int fact(int);
int main()
{
  int n;
  scanf("%d",&n);
  int result = fact(n);
  printf("fact is %d",result);
  return 0;
}
int fact(int n)
{
  if(n!=1)
  return n*fact(n-1);
  return 1;
}
