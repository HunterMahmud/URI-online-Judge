//Accepted

#include<stdio.h>
int main()
{
  int a,i,y,in=0,out=0;
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    scanf("%d",&y);
    if(y>=10 && y<=20)
    {
      in++;
    }
    else
    out++;
  }
  printf("%d in\n%d out\n",in,out);
  return 0;
}
