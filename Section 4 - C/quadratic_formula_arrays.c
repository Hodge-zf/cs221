#include <stdio.h>
#include <math.h>
 
void multiple_quad(float *a, float *b, float *c, float *pos_ans,
                   float *neg_ans, long length);
 
int main(void){
        float a[3] = {6, 2, -4};
        float b[3] = {11, -4, -7};
        float c[3] = {35, -2, 12};
        long length = 3;
        float pos_ans[3];
        float neg_ans[3];
 
        multiple_quad(a, b, c, pos_ans, neg_ans, length);
 
        return 0;
}
 
void multiple_quad(float *a, float *b, float *c, float *pos_ans,
                  float *neg_ans, long length){
 
        for (int j = 0; j < length; j++){
                pos_ans[j] = ( (-(b[j])) + sqrt( (b[j]*(b[j])) - (4*(a[j])*(c[j])) ))/(2*(a[j]));
                neg_ans[j] = ( (-(b[j])) - sqrt( (b[j]*(b[j])) - (4*(a[j])*(c[j])) ))/(2*(a[j]));
        }
}
