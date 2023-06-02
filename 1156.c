//Accepted

#include<stdio.h>
int main()
{
  int i;
  double c=0,j=1;
  for(i=1;i<=39;i=i+2)
  {
    c+=i/j;
    j*=2;
  }
  printf("%.2lf\n",c);
  return 0;
}
