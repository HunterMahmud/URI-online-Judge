//Accepted

#include<stdio.h>
int main()
{
  int a,b,c,d,e,f;
  scanf("%d%d%d%d",&a,&c,&b,&d);
  if((b>a && d>c) || (b>a && d==c) || (b==a && d>c))
  {
    e=b-a;
    f=d-c;
  }
  else if(a==b && b==c)
  {
    e=24;
    f=0;
  }
  else if(b>a && d<c)
  {
    e=b-a-1;
    f=d-c+60;
  }
  else if(b<a && d<c)
  {
    e=b-a+23;
    f=d-c+60;
  }
  else if(b==a && d<c)
  {
    e=b-a+23;
    f=d-c+60;
  }
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);

  return 0;
}
