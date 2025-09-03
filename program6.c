#include <stdio.h> 
int main()
{
    int num;
    int c = 0;
    scanf("%d", &num);
    for(int i =1; i<=num; i++)
    {
        if(num%i==0)
        c++;
    }
    if(c==2)
    {
        printf("%d YES", num);
    }
    else 
    {
        printf("NOT");
    }
}