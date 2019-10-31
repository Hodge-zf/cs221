#include <stdio.h>
#include <math.h>
 
float quadraticpos(float *a, float *b, float *c);
float quadraticneg(float *a, float *b, float *c);
 
int main(void){
 
        float a, b, c, d;
        float val1, val2;
 
        printf("Enter a, b and c values of polynomial to solve\n");
        scanf("%f", &a);
        scanf("%f", &b);
        scanf("%f", &c);
 
        printf("%f", a);
        printf("%f", b);
        printf("%f", c);
 
        val1 = quadraticpos(&a, &b, &c);
        val2 = quadraticneg(&a, &b, &c);
 
        printf("The roots of the polynomial are %f, %f\n", val1, val2);
}
float quadraticpos(float *a, float *b, float *c){
 
        float val = ( (-(*b)) + sqrt( (*b*(*b)) - (4*(*a)*(*c)) ))/(2*(*a));
        return val;
}
 
float quadraticneg(float *a, float *b, float *c){
 
        float val = ( (-(*b)) - sqrt( (*b*(*b)) - (4*(*a)*(*c)) ))/(2*(*a));
        return val;}
 
