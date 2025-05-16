#include <stdio.h>
struct State {
 char city[50];
 int pin;
};
struct Person {
 char name[50];
 struct State state;
};
int main() {
 struct Person p;
 printf("Enter name: ");
 scanf("%s", p.name);
 printf("Enter city: ");
 scanf("%s", p.state.city);
 printf("Enter pin: ");
 scanf("%d", &p.state.pin);
 printf("\nPerson Details:\n");
 printf("Name: %s\nCity: %s\nPin: %d\n", p.name, p.state.city, p.state.pin);
 return 0;
}
