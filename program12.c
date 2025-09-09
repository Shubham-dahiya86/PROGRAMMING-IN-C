#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("%d is %s\n", num, (num & 1) ? "Odd" : "Even");
    return 0;
}
