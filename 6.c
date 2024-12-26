#include <stdio.h>
#include <string.h>

int main() {
    char a[50];
    FILE *f = fopen("bt05.txt", "r");
    if(f == NULL) {
        return 0;
    }
    int i = fread(a, sizeof(char),sizeof(a), f);
    fclose(f);
    FILE *q = fopen("bt06.txt", "w");
    if( q == NULL) {
        return 1;
    }
    fwrite(a, sizeof(char), i, q);
    fclose(q);

    printf("thanh cong");
    return 0;
}
