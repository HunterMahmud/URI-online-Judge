//Accepted

#include<stdio.h>
int main()
{
  double a,b,c,d,e,f;
  scanf("%lf%lf%lf",&d,&e,&f);
  if(d>e && d>f)
  {
    a=d;
    b=e;
    c=f;
  }
  else if(e>d && e>f)
  {
      a=e;
      b=d;
      c=f;
  }
  else if(f>e && d<f)
  {
    a=f;
    b=d;
    c=e;
  }
  else if(d==e && d==f)
  {
    a=d;
    b=e;
    c=f;
  }
  else if(d==e && e>f)
  {
    a=e;
    b=d;
    c=f;
  }
  else if(d==e && e<f)
  {
    a=f;
    b=d;
    c=e;
  }
  else if(e==f && f<d)
  {
    a=d;
    b=e;
    c=f;
  }
  else if(e==f && f>d)
  {
    a=f;
    b=e;
    c=d;
  }
else if(d==f && f>e)
{
  a=d;
  b=f;
  c=e;
}
else if(d==f && f<e)
{
  a=e;
  b=d;
  c=f;
}
  if(a>0 && b>0 && c>0)
  {
  if(a>=b+c)
  {
  printf("NAO FORMA TRIANGULO\n");
  return 0;
}
  if((a*a)==((b*b)+(c*c)))
  printf("TRIANGULO RETANGULO\n");
  if((a*a)>(b*b)+(c*c))
  printf("TRIANGULO OBTUSANGULO\n");
  if((a*a)<(b*b)+(c*c))
  printf("TRIANGULO ACUTANGULO\n");
  if(a==b && b==c)
  printf("TRIANGULO EQUILATERO\n");
  if((a==b && b!=c) || (b==c && c!=a) || (c==a && a!=b))
  printf("TRIANGULO ISOSCELES\n");
}

  return 0;
}
