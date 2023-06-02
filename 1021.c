//Accpted

#include<stdio.h>
int main()
{

  int b,c,d,e,f,g,h,i,j,k,m,o,l;
  double a,notes,w;
  scanf("%lf",&a);
  i=a;
  b=i%100;
  c=b%50;
  d=c%20;
  e=d%10;
  f=e%5;
  g=f%2;
  h=g%1;
  w=(a-i)*100;
  o=w;
  m=o%50;
  j=m%25;
  k=j%10;
  l=k%5;
  printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n",i/100,b/50,c/20,d/10,e/5,f/2);
  printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",g,o/50,m/25,j/10,k/5,l);
  return 0;
}
