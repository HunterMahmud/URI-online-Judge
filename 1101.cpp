//Accepted

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int a,b,c,mx,mn,sum=0;
  while(1)
  {
    scanf("%d%d",&a,&b);
    if(a>0 && b>0)
    {
    mx=max(a,b);
    mn=min(a,b);
    for(c=mn;c<=mx;c++)
    {
      printf("%d ",c);
      sum=sum+c;
    }
    printf("Sum=%d\n",sum);
    sum=0;
  }
  else
  return 0;
  }
  return 0;
}
