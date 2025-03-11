#include<stdio.h>

int main()
{
int num,i,prime=1;
printf("Enter the Number:");
scanf("%d",&num);
if(num<=1) 
prime=0;
 
for(i=2;i<num;i++) {
if(num%i == 0) {
prime=0;
break;
}
}
if(prime)
printf("Prime Number \n");
else
printf("Not Prime Number \n");
return 0;
}

