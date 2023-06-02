//Accpted

#include<stdio.h>
int main()
{
  int a,b,c,d,e,f,g;
  scanf("%d",&a);
  b=a%100;
  c=b%50;
  d=c%20;
  e=d%10;
  f=e%5;
  g=f%2;
  printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",a,a/100,b/50,c/20,d/10,e/5,f/2,g);
  return 0;
}
