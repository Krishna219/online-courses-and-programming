#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
unsigned nCr( int n, int k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    unsigned result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}
int main() {
    int test_cases;
    scanf("%d",&test_cases);
    for(int i=0; i<test_cases;i++)
        {
        int num_of_bricks;
        scanf("%d",&num_of_bricks);
        unsigned num_of_ways = 1;
        int fours = num_of_bricks / 4;
        for(int j=1;j<=fours;j++)
            {
            num_of_ways += nCr(num_of_bricks-j*4+j,j);
            //printf("%u ", num_of_ways);
        }
        //printf("%u \n", num_of_ways);
        int prime[num_of_ways+1];
        unsigned num_of_primes = 0;
        for(int j=0;j<=num_of_ways;j++)prime[j]=1;
        
        for (int p=2; p<=sqrt(num_of_ways); p++)
        {
            // If prime[p] is not changed, then it is a prime
            if (prime[p])
            {
                // Update all multiples of p
                for (int j=p*2; j<=num_of_ways; j += p)
                    prime[j] = 0;
                }
        }
        for(int j=2;j<=num_of_ways;j++)
            if(prime[j])num_of_primes+=1;
        printf("%u\n",num_of_primes);
    }
        
    return 0;
}
