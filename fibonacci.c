#include<stdio.h>

void fibonacci(int len) {
    int first=0,second=0,third;
    printf("fibonacci series: %d %d",first,second);

    for(int i=2;i<len;i++);
    {
        third=first+second;
        printf("%d ", third);
        first=second;
        second=third;
    }
    printf("\n");
}

int main()
{
    int len;
    printf("Enter the Length of series: ");
    scanf("%d",&len);
    if(len<1) {
    printf("enter a positive integer: ");
    } else {
    fibonacci(len);
    }
    return 0;
}

