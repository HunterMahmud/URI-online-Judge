//Accpted

#include<stdio.h>
#include<math.h>
int main()
{
  double a,b,c,d,D,r1,r2;
  scanf("%lf%lf%lf",&a,&b,&c);
  D=(b*b)-(4*a*c);
  if(D>0 && a!=0)
  {
    d=sqrt(D);
    r1=((-b)+d)/(2*a);
    r2=((-b)-d)/(2*a);
    printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
  }
  else if(D<0 || a==0)
  {
    printf("Impossivel calcular\n");
  }
  return 0;
}
