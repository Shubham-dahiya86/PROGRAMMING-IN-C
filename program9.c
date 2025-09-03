#include <stdio.h>
int main()
 {
    int num, sum = 0;
    printf("Enter a four-digit integer: ");
    scanf("%d", &num);
    if (num < 1000 || num > 9999) {
        printf("Invalid input. Please enter a four-digit integer.\n");
    }
    while (num > 0)
     {
        sum += num % 10; 
        num /= 10;    
    }
    printf("The sum of the digits is: %d\n", sum);
}