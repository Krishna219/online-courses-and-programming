#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        int number = n;
        int divisors = 0;
        while(n>0)
            {
            int digit = n%10;
            if(digit)
                if(number%digit == 0)divisors+=1;
            n=n/10;
        }
        printf("%d\n",divisors);
    }
    return 0;
}
