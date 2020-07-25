#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long sum[5];
    long max, min;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
       sum[arr_i] = 0;
       //printf("%d", sum[arr_i]);
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5 ; j++)
        {
            if(i != j)
            {
                sum[i] += arr[j];
                //printf("%d %d\n", arr[j], sum[i]);
            }
        }
        if(i == 0)
        {
            max = sum[i];
            min = sum[i];
        }
        else
        {
            if(sum[i] > max)
                max = sum[i];
            if(sum[i] < min)
                min = sum[i];
        }
        //printf("%d %d\n", max, min);
        //printf("%d\n", sum[i]);
    }
    printf("%ld %ld\n", min, max);
    return 0;
}
