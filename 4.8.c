#include <stdio.h>
#include <string.h>

int main(){
    char c[1000] = "Tuan Anh ne !";
    printf("%s\n", c);
    printf("So luong ky tu trong xau : %lu\n", strlen(c));
    for(int i = 0; i < strlen(c); i++){
        printf("c[%d] = %c\n", i, c[i]);
    }
    printf("In chuoi lat nguoc : ");
    for(int i = strlen(c) - 1; i >= 0; i--){
        printf("%c", c[i]);
    }
    return 0;
}