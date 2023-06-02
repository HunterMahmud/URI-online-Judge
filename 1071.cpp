//Accepted

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int i,j,a,b,mx,mn,sum=0;

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
  return 0;
}
