//Not Accepted but it has no error
//my program

#include<stdio.h>
int main()
{
  int a,i,posn=0,r=0,t=0,high=0;
  for(i=1;i<=100;i++)
  {
    scanf("%d",&a);
    if(a<high)
    {
    r++;
    t=high;
    }
    if(a>high)
    {
      high=a;
      posn++;
    }
  }
  if(high>t)
  printf("%d\n%d\n",high,posn+r);
  else
  printf("%d\n%d\n",high,posn);
  return 0;
}
