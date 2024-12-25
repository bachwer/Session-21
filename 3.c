#include <stdio.h>
#include <string.h>

int main(void){
    char a[100];
    FILE *f = fopen("bt01.txt", "w");
    if(f == NULL){
        printf("Ko mo file dc");
        return 1;
    }
	printf("Enter the string: ");
	fgets(a, 100, stdin);
	a[strlen(a) - 1] = '\0';
    for(int i = 0; i < strlen(a); i++){
    	fwrite(&a[i], sizeof(char), 1, f);
	}  
    
    
    fclose(f);
}
