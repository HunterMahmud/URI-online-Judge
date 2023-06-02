//Accepted

#include<stdio.h>
int main()
{
  int x,y;
  scanf("%d%d",&x,&y);
  if(x<y)
  printf("O JOGO DUROU %d HORA(S)\n",y-x);
  else if(x==y)
  printf("O JOGO DUROU %d HORA(S)\n",24);
  else if(y<x)
  printf("O JOGO DUROU %d HORA(S)\n",(24-x+y));
  return 0;
}
