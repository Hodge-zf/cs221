#include <stdio.h>
 
int main(void){
 
        int index = 1;
        int upperlim;
        int partial;
 
        printf("Enter an integer\n");
        scanf("%d", &upperlim);
 
        while (index != (upperlim + 1) && upperlim > 0){
                        partial = index * 2;
                        printf("%d\n", partial);
                        index++;
        }
}
