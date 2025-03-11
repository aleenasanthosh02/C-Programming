#include <stdio.h>

void oddeven(int num);
int main() 
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    oddeven(num);
    return 0;
}

void oddeven(int num) 
{
    if (num & 1)
        printf("Number is odd\n");
    else
        printf("Number is even\n");
}



