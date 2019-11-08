#include <stdio.h>
#include <string.h>
 
int string_length(char a[]);
 
int main(void){
 
        char str1[5] = "Test";
 
        int str_length = string_length(str1);
        printf("Length: %d\n", str_length);
 
        return 0;
}
 
int string_length(char a[]){
 
        int length = 0;
        for (int i = 0; a[i] != '\0'; i++){
                printf("%c", a[i]);
                length++;
        }
        printf("\n");
        return length;
}
