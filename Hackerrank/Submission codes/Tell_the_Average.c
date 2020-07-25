#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
long N, i;
    scanf("%ld", &N);
    long list[N], sum = 0, a, b, ave;
    for (i = 0;i < N;i++)
        {
        scanf("%ld", &list[i]);
        if(i > 0)
            {
            a = list[0];
            b = list[i];
            list[0] = a + b + a * b;
            sum += list[0] % 1000000007; 
            }
        
    }
    ave = sum / (N - 1);
    printf("%ld", ave);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
