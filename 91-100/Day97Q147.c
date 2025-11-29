#include <stdio.h>

struct Employee {
    int id;
    char name[50];
};

int main() {
    FILE *fp = fopen("emp.bin", "wb");
    struct Employee emp = {101, "John"};
    fwrite(&emp, sizeof(emp), 1, fp);
    fclose(fp);
    
    fp = fopen("emp.bin", "rb");
    struct Employee read_emp;
    fread(&read_emp, sizeof(read_emp), 1, fp);
    printf("%d %s\n", read_emp.id, read_emp.name);
    fclose(fp);
    return 0;
}
