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
    int a[n][n];
    int sum_main = 0;
    int sum_trail = 0;
    int abs_dif = 0;
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
           
          if (a_i == a_j)
          {
              sum_main += a[a_i][a_j];
              //printf("\n%d \t %d", a[a_i][a_j], sum_main);
          }
           
          //printf("\n%d %d ", a_i + a_j, n-1);
           
          if((a_i + a_j) == (n - 1))
          {
              sum_trail += a[a_i][a_j];
              //printf("\n%d \t %d", a[a_i][a_j], sum_trail);
          }
          
       }
    }
    
    //printf("%d\n", sum_main);
    //printf("%d\n", sum_trail);
    
    abs_dif = sum_main - sum_trail;
    
    if (abs_dif < 0)
        abs_dif = -abs_dif;
    
    printf("%d\n", abs_dif);
    
    /*for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          printf("%d ",a[a_i][a_j]);
       }
       printf("\n");
    }*/
    
    return 0;
}
