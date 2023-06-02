//Accepted

#include<stdio.h>
int main()
{
    int i,a,d=0;
    scanf("%d",&a);
    for(i=a;;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
            d++;
            if(d==6)
                break;
        }

    }
    return 0;
}
