 #include <stdio.h>

int main() {
    int age;
    char name[20];

    printf("Hi Maddy!\n");
    printf("Enter your name:");
    scanf("%s", name);
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Hello %s!, you are %d years old.\n", name, age);

    return 0;
}
