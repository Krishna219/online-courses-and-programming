#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 100000
#define MAX_VAL 1000000001

long long candies[MAX],arranged[MAX];

/** The code to read from STDIN and output to STDOUT has been provided by us, for convenience. You may or may not use this. **/
 
int main() {
    
    long long N,K;
    long long i,j,l,unfairness=0;
    
    scanf("%lld %lld",&N,&K);
    long long c[K],m=0;
    c[0]=0;
    for(i=0;i<N;i++)
        {
        scanf("%lld",&candies[i]);
        arranged[i]=candies[i];
    }
    for(i=0;i<N;i++)
        {
        for(j=N-1;j>i;j--)
            {
            if(arranged[i]>=arranged[j])
                {l=arranged[i];
                 arranged[i]=arranged[j];
                 arranged[j]=l;
                }
        }
    }
    for(i=0;i<N;i++)
        {
        if(m<K)
            {
            if(arranged[i]>c[m])
                {
                c[m]=arranged[i];
                c[m+1]=0;
                m+=1;
                }
           }
        }
    
 // Compute the min unfairness over here, using N,K,candies
   unfairness=c[K-1]-c[0];
    printf("%lld\n",unfairness);
    return 0;
}
