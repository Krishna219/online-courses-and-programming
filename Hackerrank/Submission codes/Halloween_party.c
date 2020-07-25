#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
unsigned long long max_cuts(unsigned long long a)
    {
    unsigned long long n,c;
    c=a%2;
    n=a/2;
    if(c==0)
        return (n*n);
    else
        return (n*(n+1));
}
int main() {
int T;
    scanf("%d",&T);
    int i;
    unsigned long long cuts[T],K[T];
    for(i=0;i<T;i++)
        {
        scanf("%llu",&K[i]);
        cuts[i]=max_cuts(K[i]);
    }
    for(i=0;i<T;i++)
        printf("%llu\n",cuts[i]);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
