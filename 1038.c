//Accpted

#include<stdio.h>
int main()

{
    int x,y;
    double a=4.00,b=4.50,c=5.00,d=2.00,e=1.50;

    scanf("%d%d",&x,&y);
    switch(x)
    {
        case 1:
           printf("Total: R$ %.2lf\n",a*y);
           break;
        case 2:
           printf("Total: R$ %.2lf\n",b*y);
           break;
        case 3:
           printf("Total: R$ %.2lf\n",c*y);
           break;
        case 4:
           printf("Total: R$ %.2lf\n",d*y);
           break;
        case 5:
           printf("Total: R$ %.2lf\n",e*y);
           break;

    }


    return 0;
}
