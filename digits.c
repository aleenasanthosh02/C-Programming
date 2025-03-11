#include<stdio.h>

int main()
{
int count=0,num;
printf("Enter the Number: ");
scanf("%d",&num);

do{
count++;
num/=10;
} while(num != 0);

printf("Number of Digits: %d\n",count);
return 0;
}

