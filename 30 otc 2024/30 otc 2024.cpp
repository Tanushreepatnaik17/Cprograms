#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char *name;  
    int rollno;
    float marks;
};

int main() {
    struct student s2;
    struct student *p = &s2;

    
    p->name = (char*) malloc(30 * sizeof(char));
    if (p->name == NULL) {
        printf("Memory not allocated\n");
        exit(1); 
    }

    printf("Enter the name of the student: ");
    fgets(p->name, 30, stdin);

    printf("Enter the roll number of the student: ");
    scanf("%d", &p->rollno);

    printf("Enter the marks of the student: ");
    scanf("%f", &p->marks);


    printf("Student details:\n");
    printf("Name: %s", p->name);
    printf("Roll No: %d\n", p->rollno);
    printf("Marks: %.2f\n", p->marks);

    
    free(p->name);

    return 0;
}
