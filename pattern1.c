#include<stdio.h>

int main()
{
int i,j,num;
printf("Enter the Number of Rows: ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
for(j=0;j<i;j++)
{
printf("* ");
}
printf("\n");
}
return 0;
}

