//Accepted

#include<stdio.h>
int main()
{
    int a,i;
    double d,e,f;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%lf%lf%lf",&d,&e,&f);
        printf("%.1lf\n",((d*2)+(e*3)+(f*5))/10);
    }
    return 0;
}
