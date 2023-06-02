//Accepted

#include<stdio.h>
int main()
{
  int a,b,c,d;
  while(1)
  {
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("Decrescente\n");
    else if(a==b)
    return 0;
    else
    printf("Crescente\n");
  }
  return 0;
}
