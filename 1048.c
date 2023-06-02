//Accepted

#include<stdio.h>
int main()
{
  double a,b,c;
  scanf("%lf",&a);
  if(a>0 && a<=400)
  {
  c=15;
  b=a*0.15;
}
   else if(a>=400.01 && a<=800)
  {
  c=12;
  b=a*0.12;
}
  else if(a>=800.01 && a<=1200)
  {
  c=10;
  b=a*.1;
}
  else if(a>=1200.01 && a<=2000)
  {
  c=7;
  b=a*.07;
}
  else if(a>2000)
{
  c=4;
  b=a*.04;
}
  printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.lf %%\n",a+b,b,c);
  return 0;
}
