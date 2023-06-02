//Accpted

#include<stdio.h>
int max(int a,int b);
int min(int a,int b);
int main()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",min(min(a,b),c),max(min(min(a,max(b,c)),min(b,max(a,c))),min(c,max(a,b))),max(max(a,b),c),a,b,c);
  return 0;
}
int max(int a, int b)
{
    return (a > b ) ? a : b;
}
int min(int a,int b)
{
  return (a < b) ? a : b;
}
