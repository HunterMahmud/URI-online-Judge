//incompleted but has other solution

#include<stdio.h>
int main()
{
  int d2,d1,h1,h2,m1,m2,s1,s2,day,hour,minute,seconds;
  char f[5];
  scanf("%s%d%d%s%d%s%d",&f,&d1,&h1,&f,&m1,&f,&s1);
  scanf("%s%d%d%s%d%s%d",&f,&d2,&h2,&f,&m2,&f,&s2);
  if(h2>h1 || h2==h1)
  {
    if(m2>m1 || m2==m1)
    {
      if(s2>s1 || s2==s1)
      {
        day=d2-d1;
        hour=h2-h1;
        minute=m2-m1;
        seconds=s2-s1;
      }
      else if(s2<s1 && m2>m1)
      {
        day=d2-d1;
        hour=h2-h1;
        minute=m2-m1-1;
        seconds=s2-s1+60;
      }
      else if(s2<s1 && m2==m1)
      {
        day=d2-d1;
        hour=h2-h1-1;
        minute=m2-m1+59;
        seconds=s2-s1+60;
      }
      else if((s2<s1 && m2==m1) || h1==h2)
      {
        day=d2-d1;
        hour=h2-h1-1;
        minute=m2-m1+59;
        seconds=s2-s1+60;
      }
    }
    else if(m2<m1)
    {
      if(s2>s1 || s1==s2)
      {
        day=d2-d1;
        hour=h2-h1-1;
        minute=m2-m1+59;
        seconds=s2-s1;
      }
      else if(s2<s1)
      {
        day=d2-d1;
        hour=h2-h1-1;
        minute=m2-m1+59;
        seconds=s2-s1+60;
      }
    }
    else if(m2==m1)
    {

    }
  }
  printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",day,hour,minutes,seconds);

  return 0;
}
