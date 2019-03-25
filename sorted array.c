#include <stdio.h>
#include<conio.h>
void main() 
{
int long a;
clrscr();
int rem,rev=0,temp;
scanf("%ld",&a);
temp=a;
while(a>0)
{
rem=a%10;
rev=rev*10+rem;
a=a/10;
}
printf("%d",rev);
getch();
}
