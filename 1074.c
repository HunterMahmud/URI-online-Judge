//Accepted

#include<stdio.h>
int main()
{
  int a,i,y;
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    scanf("%d",&y);
    if(y%2!=0 && y<0)
    {
    printf("ODD NEGATIVE\n");
    }
    else if(y==0)
    printf("NULL\n");
    else if(y%2!=0 && y>0)
    {
    printf("ODD POSITIVE\n");
    }
    else if(y%2==0 && y<0)
    {
    printf("EVEN NEGATIVE\n");
    }
    else if(y%2==0 && y>0)
    {
    printf("EVEN POSITIVE\n");
    }

  }
  return 0;
}
