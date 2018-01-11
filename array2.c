#include<stdio.h>
#include<conio.h>

int main()
{
  int i,z[5];
  for(i=0;i<5;i++)
  {
  printf("Enter the value of elements %d =",i);
  scanf("%d",&z[i]);
  }
  printf("\n");
  for(i=0;i<5;i++)
  {
    printf("%d\n",z[i]);
  }
  printf("\noutput in reverse direction\n");
  for(i=4;i>=0;i--)
  {
    printf("%d\n",z[i]);
  }
  return 0;
}
