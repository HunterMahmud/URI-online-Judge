//Accepted

#include<stdio.h>
#include<string.h>
int main()
{
  int a,i,t,b,f=0,rbt=0,r=0;
  char e[3],S[]="S",C[]="C",R[]="R";
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    scanf("%d%s",&b,&e);
    if(0==strcmp(e,S))
    {
      f+=b;
    }
    else if(0==strcmp(e,C))
    {
      rbt+=b;
    }
    else if(0==strcmp(e,R))
    {
      r+=b;
    }
  }
  t=f+r+rbt;
  printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n",t,rbt,r,f,(rbt*100.00)/t,(r*100.00)/t,(f*100.00)/t);
  return 0;
}
