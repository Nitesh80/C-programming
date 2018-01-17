#include<stdio.h>
#include<conio.h>

int main()
{
int a[5],i,c=0;
printf("input the 5 elements in array\n");
for(i=0;i<5;i++)
{
  printf("element %d=",i+1);
  scanf("%d",&a[i]);
  printf("\n");
}
for(i=0;i<5;i++)
{
  c=c+a[i];
}
printf("Sum of elements=%d",c);
return 0;
}
