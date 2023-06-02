//Accepted

#include<stdio.h>
int main()
{
  int a,b=0,c=0;
  double d;
  while(1)
  {
    scanf("%d",&a);
    if(a<0)
    break;
    b+=a;
    c++;
  }
  d=(b*1.00/c*1.00);
  printf("%.2lf\n",d);
  return 0;
}
