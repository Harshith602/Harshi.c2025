#include <stdio.h>
int main()
{
    int num;
    printf("Hi Harshi!\n");
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num>=10&&num<=100)
    {
        printf("The number is present in between 10 and 100");
    }
    else
    {
        printf("the number is not present in between 10 and 100");
    }
    return 0;
}
