#include<stdio.h>
int main()
{
    clrscr();
 int num,a,b,c,d,e;
scanf("%d",&num);
a=num%10;

num=num/10;
b=num%10;
num=num/10;
c=num%10;
num=num/10;
d=num%10;
num=num/10;
e=a*10000+b*1000+c*100+d*10+num;
printf("%d",e);
/
