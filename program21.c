#include <stdio.h>
int main() 
{
    int n, factorial = 1, i = 1;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else 
    {
        while (i <= n) 
        {
            factorial *= i;
            i++;
        }
        printf("Factorial of %d = %d\n", n, factorial);
    }
    return 0;
}