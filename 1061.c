//Accepted

#include<stdio.h>
int main()
{
  int d2,d1,r1,r2,h1,h2,m1,m2,s1,s2,day,hour,minute,seconds;
  char f[5];
  scanf("%s%d%d%s%d%s%d",&f,&d1,&h1,&f,&m1,&f,&s1);
  scanf("%s%d%d%s%d%s%d",&f,&d2,&h2,&f,&m2,&f,&s2);
  r1=(d1*86400)+(h1*3600)+(m1*60)+s1;
  r2=(d2*86400)+(h2*3600)+(m2*60)+s2;
  day=(r2-r1)/86400;
  hour=((r2-r1)%86400)/3600;
  minute=(((r2-r1)%86400)%3600)/60;
  seconds=(((r2-r1)%86400)%3600)%60;
  printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",day,hour,minute,seconds);
  return 0;
}
