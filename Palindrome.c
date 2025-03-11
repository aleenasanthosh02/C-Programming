#include<stdio.h>
int main()
{
int num,reverse=0,original,remainder;
printf("enter the number:");
scanf("%d", &num);
original=num;
while(num>0)
{
remainder=num%10;
reverse=(reverse*10)+remainder;
num/=10;
}
(original==reverse) ? printf("Palindrome"): printf("Not Palindrome");
return 0;
}
