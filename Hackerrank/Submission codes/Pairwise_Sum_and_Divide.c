#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int T, k;
scanf( "%d" ,&T);
for( k = 0 ; k < T ; k++ )
{
    long long N, i, j;
    scanf("%lld", & N);
    long long a[N], sum = 0;
    for ( i = 0; i < N ; i++ )
        scanf("%lld", &a[i]);
    for( i = 0 ; i < N ; i++ )
        {
        for( j = i+1 ; j < N ; j++ )
            sum += ( a[i] + a[j] ) / ( a[i] * a[j] );
    }
    printf ( "%lld\n", sum);
}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
