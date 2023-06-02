//Accpted

#include<stdio.h>
int main()
{
  double a,b;
  char c[10];
  scanf("%s",&c);
  scanf("%lf%lf",&a,&b);
  printf("TOTAL = R$ %.2lf\n",a+(b*0.15));
  return 0;
}
