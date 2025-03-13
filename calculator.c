#include<stdio.h>

float add(float a,float b);
float sub(float a,float b);
float multi(float a,float b);
float div(float a,float b);
int main()
{
float num1,num2,result;
char operator;
printf("Enter the first and second number: ");
scanf("%f,%f", &num1, &num2);
printf("Enter the operator (+,-,*,/):  ");
scanf(" %c", &operator);

switch(operator) {
case '+': result=add(num1,num2);
          break;
case '-': result=sub(num1,num2);
          break;
case '*': result=multi(num1,num2);
          break;
case '/': if(num2 != 0) 
          result = div(num1,num2);
          else {
          printf("Error: division by zero is not possible ");
          return 1;
          }
          break;
default: printf("invalid operator");
          return 1;
}
printf("%.2f %c %.2f = %.2f\n ",num1,operator,num2,result);
return 0;
}

float add(float a, float b) {
return a+b;
}
float sub(float a, float b) {
return a-b;
}
float multi(float a, float b) {
return a*b;
}
float div(float a, float b) {
return a/b;
}
