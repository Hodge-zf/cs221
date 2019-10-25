#include<stdio.h>
 
int main( void ){
        int integer1;
        int integer2;
        int integer3;
        int sum;
        int product;
        int square1;
        int square2;
        int square3;
        int cube1;
        int cube2;
        int cube3;
 
        printf( "Enter first integer\n");
        scanf("%d", &integer1);
 
        printf( "Enter second integer\n");
        scanf("%d", &integer2);
 
        printf( "Enter third integer\n");
        scanf("%d", &integer3);
 
        sum = integer1 + integer2 + integer3;
        product = integer1 * integer2 * integer3;
        square1 = integer1 * integer1;
        square2 = integer2 * integer2;
        square3 = integer3 * integer3;
        cube1 = square1 * integer1;
        cube2 = square2 * integer2;
        cube3 = square3 * integer3;
 
        printf( "Sum: %d\n", sum);
        printf( "Product: %d\n", product);
        printf( "Integer 1 squared: %d\n", square1);
        printf( "Integer 2 squared: %d\n", square2);
        printf( "Integer 3 squared: %d\n", square3);
        printf( "Integer 1 cubed: %d\n", cube1);
        printf( "Integer 2 cubed: %d\n", cube2);
        printf( "Integer 3 cubed: %d\n", cube3);
}
