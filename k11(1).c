#include<stdio.h>
void main()
{
int sum=0,i,num=0,pow;
clrscr();
printf("Enter the number:\n");
scanf("%d",&num);
printf("Enter the power:\n");
scanf("%d",&pow);
if(i<=pow)
{
sum=sum*num;
}
printf("%d is power of %d: %d",num,pow,sum);
getch();
}
