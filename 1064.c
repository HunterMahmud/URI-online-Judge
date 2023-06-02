//Accepted

#include<stdio.h>
int main()
{
  int i,count=0;
  double a,d=0;
  for(i=1;i<=6;i++)
  {
    scanf("%lf",&a);
    if(a>0)
    {
      d=d+a;
      count++;
    }
  }
  printf("%d valores positivos\n%.1lf\n",count,d/count);
  return 0;
}
