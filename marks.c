 #include <stdio.h>
struct Student{
    char name[100];
    int rollno;
    float marks;
};
int main() {
    struct Student s;
    printf("Enter name:");
    scanf("%s", &s.name);
    printf("Enter rollno:");
    scanf("%d", &s.rollno);
    printf("Enter marks scored in exam out of 625:");
    scanf("%f", &s.marks);
    printf("========================\n");
    printf("Name: %s\nRollno: %d\nMarks Scored:%f\n", s.name, s.rollno, s.marks);
}
