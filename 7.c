#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct information {
    int id;
    char mame[50];
    int age;
};

struct information *student;
int main() {
    int n;
    printf("So sinh vien muon nhap: ");
    scanf("%d", &n);
    getchar();
    student = (struct information*) malloc(n + 1 * sizeof(struct information));
    if(student == NULL){
        return 0;
    }
    for(int i = 0; i < n; i++) {
        student[i].id = i + 1;

        printf("Nhap ten: ");
        fgets(student[i].mame, sizeof(student[i].mame), stdin);
        student[i].mame[strlen(student[i].mame) - 1] = '\0';

        printf("Nhap tuoi: ");
        scanf("%d", &student[i].age);

        getchar();
    }

    FILE *f = fopen("Student.txt", "w");


    fwrite(student, sizeof(struct information), n, f);

    fclose(f);
  free(student);
}
