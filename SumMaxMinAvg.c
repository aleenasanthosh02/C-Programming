#include<stdio.h>
int main()
{
int marks[5],sum,min,max,i;
float avg;
printf("enter the values:");
for(i=0;i<5;i++)
{
scanf("%d",&marks[i]);
sum+=marks[i];
}
min=max=marks[0];
for (i=1;i<5;i++)
{
if(marks[i]<min)
min=marks[i];
if(marks[i]>max)
max=marks[i];
}
avg=sum/5.0;
printf("minimum marks:%d\n",min);
printf("maximum marks:%d\n",max);
printf("sum of marks:%d\n",sum);
printf("average marks:%f\n",avg);
return 0;
}
