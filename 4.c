#include <stdio.h>
#include <string.h>

int main(void){
    char a[100];
    FILE *f = fopen("bt01.txt", "r");
    if(f == NULL){
        printf("Ko mo file dc");
        return 1;
    }
    int i = 0;
 	while(fread(&a[i], sizeof(char), 1, f) == 1){
 		if(a[i] == '\n'){
 			break;
		 }
		 i++;
	 }
	a[i + 1] = '\0';
    printf("%s", a);
    
    fclose(f);
}
