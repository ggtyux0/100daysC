#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student *s = (struct Student*)malloc(sizeof(struct Student));
    
    scanf("%s %d %d", s->name, &s->roll_no, &s->marks);
    
    s->marks += 5;
    
    printf("%s %d %d\n", s->name, s->roll_no, s->marks);
    
    free(s);
    return 0;
}
