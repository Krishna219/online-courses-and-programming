#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int arr[6][6];
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){
          
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }
    int largest_sum =0;
    for(int i=1;i<5;i++)
        {
        for(int j=1;j<5;j++)
            {
            int sum = arr[i][j] + arr[i-1][j-1] + arr[i+1][j+1] + arr[i-1][j] + arr[i-1][j+1] + arr[i+1][j-1] + arr[i+1][j];
            if(sum > largest_sum) largest_sum =sum;
        }
    }
    printf("%d",largest_sum);
    return 0;
}
