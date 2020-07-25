#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fact(int num)
{
    int prod = 1;
    if(num == 0 || num == 1)
        return 1;
    for(int i = 1; i <= num; i++)
        prod *= i;
    return prod;
}
int main() {
    int t;
    scanf("%d", &t);
    for(int num = 0; num < t; num++ )
        {
        int n;
        int hand_shakes = 0;
        scanf("%d", &n);
        if(n == 1)
            {
            printf("%d\n", hand_shakes);
            continue;
            }
        hand_shakes = fact(n) /( fact(2) * fact(n - 2) );
        printf("%d\n", hand_shakes);
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
