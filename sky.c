#include <stdio.h>





int main(void)
{
    int a = 5;
    int b;

    printf("Enter a number: ");
    scanf("%d", &b);

    int c = a + b;

    printf("Result (a + b = %d)\n", c);

    return 0;
}
