#include <stdio.h>

int main(void){
    char a;
    FILE *f = fopen("bt01.txt", "r");
    if(f == NULL){
        printf("Ko mo file dc");
        return 1;
    }

    fread(&a, sizeof(char), 1, f);
    printf("%c", a);
    fclose(f);
}
