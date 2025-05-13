#include <stdio.h>

   int add(int a, int b); // Function declaration

int main() {
    int num1, num2, result;

    printf("Enter two int: ");
    scanf("%d %d", &num1, &num2);

    result = (num1+num2); //function calling

   printf("Sum = %d\n", result );

    return 0;
}


int add(int a, int b) { //function defination
    return a + b;
}
