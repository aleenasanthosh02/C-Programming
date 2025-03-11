#include<stdio.h>
 
 int main()
 {
 int a,b,c;
 printf("Enter Three Numbers:\n ");
 scanf("%d%d%d",&a,&b,&c);
 if(a>0 && b>0 && c>0)
 printf("All Numbers are Positive");
 else
 printf("All Numbers are not Positive");
 return 0;
 }
