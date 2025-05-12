#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float weight;
    char usn[20];
    char college[100];
    float height;
};

int main() {
    struct Student s;

    // Input student details
    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter age: ");
    scanf("%d", &s.age);

    printf("Enter weight (in kg): ");
    scanf("%f", &s.weight);

    printf("Enter USN: ");
    scanf("%s", s.usn);
    getchar(); // To consume leftover newline

    printf("Enter college name: ");
    fgets(s.college, sizeof(s.college), stdin);

    printf("Enter height (in cm): ");
    scanf("%f", &s.height);

    // Display student details
    printf("\n--- Student Details ---\n");
    printf("Name    : %s", s.name);
    printf("Age     : %d\n", s.age);
    printf("Weight  : %.2f kg\n", s.weight);
    printf("USN     : %s\n", s.usn);
    printf("College : %s", s.college);
    printf("Height  : %.2f cm\n", s.height);

    return 0;
}
