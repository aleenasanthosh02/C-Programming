#include<stdio.h>


void decTobin(int n)  {
    if (n>1)
        decTobin(n/2);
    printf("%d", n%2 );
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    
    printf("Binary representation: ");
    if (num == 0)
        printf("0");
    else
        decTobin(num);
    printf("\n");
    return 0;
}
