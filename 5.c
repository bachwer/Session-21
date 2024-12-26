#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char a[50];
    FILE *f = fopen("bt05.txt", "w");

    printf("Moi nhap so dong muon nhap: ");
    scanf("%d", &n);
    getchar();
    for(int i = 0; i <n; i++) {
        printf("------Dong %d ------\n", i + 1);
        printf("Enter something: ");
        fgets(a, 50, stdin);
        fwrite(a, sizeof(char), strlen(a), f);
    }
    fclose(f);
    return 0;
}
