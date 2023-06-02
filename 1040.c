//Accepted

#include<stdio.h>
int main()
{
    double a,b,c,d,e,f;
    scanf("%lf%lf%lf%lf",&b,&c,&d,&e);
    a=((b*2)+(c*3)+(d*4)+e)/10;
    if(a<=4.9)
        printf("Media: %.1lf\nAluno reprovado.\n",a);
    else if(a>=5 && a<=6.9)

    {
        scanf("%lf",&f);
        printf("Media: %.1lf\nAluno em exame.\n",a);
        printf("Nota do exame: %.1lf\nAluno aprovado.\nMedia final: %.1lf\n",f,(a+f)/2);
    }

    else if(a>=7.0)
        printf("Media: %.1lf\nAluno aprovado.\n",a);

    return 0;
}
