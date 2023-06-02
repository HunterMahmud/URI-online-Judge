//Accepted

#include<stdio.h>
int main()
{
    int i,a;
    scanf("%d",&a);
    for(i=0;i<=10000;i++)
    {
        if(i%a==0)
            printf("%d\n",i+2);

    }
    return 0;
}
