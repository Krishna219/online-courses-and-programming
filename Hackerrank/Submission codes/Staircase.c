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
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n-1; j++)
            printf(" ");
        for(int j = n - i; j <= n; j++)
            printf("#");
        printf("\n");
    }
    return 0;
}
