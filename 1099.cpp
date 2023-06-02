//Accepted

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int i,j,k,a,b,mx,mn,sum=0;
  scanf("%d",&k);
  for(i=1;i<=k;i++)
  {
    scanf("%d%d",&a,&b);
    mn=min(a,b);
    mx=max(a,b);
    for(j=mn+1;j<mx;j++)
    {
      if(j%2!=0)
      {
        sum=sum+j;
      }
    }
    printf("%d\n",sum);
    sum=0;
  }
  sum=0;
  return 0;
}
