//Accpted

#include<stdio.h>
#include<math.h>
int main()
{
  double x1,y1,x2,y2,a,b;
  scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
  a=(x1-x2)*(x1-x2);
  b=(y1-y2)*(y1-y2);
  printf("%.4lf\n",sqrt(a+b));
  return 0;
}
