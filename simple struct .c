#include <stdio.h>
struct student {
    char name[50];
    int id;
    double marks;
} s;

int main() {
    printf("Enter Student information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter student Id: ");
    scanf("%d", &s.id);
    printf("Enter marks: ");
    scanf("%lf", &s.marks);

    printf("Displaying Information:\n");
    printf("Name: %s", s.name);
    
    printf("Student Id: %d\n", s.id);
    printf("Marks: %.2lf\n", s.marks);

    return 0;
}

