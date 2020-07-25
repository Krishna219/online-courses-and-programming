#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
long long N,M,i,j;
    scanf("%lld %lld",&N,&M);
    long double a[M],b[M],k[M],t[N],total=0,average;
    for(i=0;i<N;i++)
        t[i]=0;
    for(i=0;i<M;i++)
        {
        scanf("%llf %llf %llf",&a[i],&b[i],&k[i]);
        for(j=a[i]-1;j<=b[i]-1;j++)
            t[j]+=k[i];
    }
    for(i=0;i<N;i++)
        total+=t[i];
    average=total/N;
    printf("%.0llf",average);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
