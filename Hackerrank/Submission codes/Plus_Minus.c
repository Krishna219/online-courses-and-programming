#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    int npos, nneg, nzero;
    float pos, neg, zero;
    npos = 0;
    nneg = 0;
    nzero = 0;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
       if(arr[arr_i] == 0)
       {
           nzero += 1;
           zero = nzero/(float)n;
           //printf("nzero = %d, frac_zero = %8.5f", nzero, zero);
       }
       else if(arr[arr_i] > 0)
       {
           npos += 1;
           pos = npos/(float)n;
           //printf("npos = %d, frac_pos = %8.5f", npos, pos);
       }
       else
       {
           nneg += 1;
           neg = nneg/(float)n;
           //printf("nneg = %d, frac_neg = %8.5f", nneg, neg);
       }
             
       //printf("\n");
    }
    printf("%.6f\n", pos);
    printf("%.6f\n", neg);
    printf("%.6f", zero);
    return 0;
}
