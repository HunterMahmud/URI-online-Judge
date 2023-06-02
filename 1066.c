//Accepted

#include<stdio.h>
int main()
{
    int a,b=0,c=0,d=0,e=0,i;
    for(i=1;i<=5;i++)
    {
        scanf("%d",&a);

        if(a%2==0)
        {
            b++;
        }

        if(a>0)
            {
            c++;
            }
        if(a<0)
            {
                d++;
            }
        if(a%2!=0)
            {
                e++;
            }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",b,e,c,d);
    return 0;
}
