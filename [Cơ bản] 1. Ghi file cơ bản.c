#include <stdio.h>

int main() {
    FILE *f =fopen("bt01.txt", "w");
    char input[100];
    if(f == NULL) {
        printf("Loi mo file");
        return 1;
    }
    printf("Moi nhap chuoi: ");
    fgets(input, 100, stdin);

    fputs(input, f);

    fclose(f);
    printf("Thanh cong: ");
    return 0;
}
