//Accepted

#include<stdio.h>
int main()
{
  int a,b,i;
  scanf("%d%d",&b,&a);
  for(i=1;i<=a;i++)
  {
    printf("%d",i);
    if(i%b==0)
    {
      printf("\n");
    }
    else
    printf(" ");
  }
  return 0;
}
