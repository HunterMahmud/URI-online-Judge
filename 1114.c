//Accepted

#include<stdio.h>
int main()
{
  int a=2002,b;
  while(1)
  {
    scanf("%d",&b);
    if(b==a)
    {
      printf("Acesso Permitido\n");
      return 0;
    }
    else if(b!=a)
    {
      printf("Senha Invalida\n");
    }
  }
  return 0;
}
