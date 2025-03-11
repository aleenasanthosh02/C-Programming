#include<stdio.h>

int main()
{
int i,j,num,space;
printf("Enter the Number of Rows: ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
for(space=1;space<=num-i;space++) {
printf(" ");
}
for(j=1;j<=i;j++) {
printf("* ");
}
printf("\n");
}
return 0;
}

