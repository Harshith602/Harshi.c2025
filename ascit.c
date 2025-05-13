#include <stdio.h>
int main() {
    char ch;
    printf("Hi Harshi!\n");
    printf("Enter any character (both upper and lower case):");
    scanf("%c", &ch);
    printf("The ASCII value of %c is: %d\n", ch, ch);
    return 0;
}
