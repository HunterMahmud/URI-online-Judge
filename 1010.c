//Accpted

#include<stdio.h>
int main()
{
  int a,b,c,d;
  double v,w;
  scanf("%d%d",&a,&b);
  scanf("%lf",&v);
  scanf("%d%d",&c,&d);
  scanf("%lf",&w);
  printf("VALOR A PAGAR: R$ %.2lf\n",(b*v)+(d*w));
  return 0;
}
