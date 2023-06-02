//Accepted

#include<stdio.h>
int main()
{
  int i,j,a,b,e=0;
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    e=0;
    scanf("%d",&b);
    for(j=2;j<=b-1;j++)
    {
      if(b%j==0)
      {
        e++;
        break;
      }
    }
    if(e==0 && b!=1)
    printf("%d eh primo\n",b);
    else
    printf("%d nao eh primo\n",b);
  }
  return 0;
}
