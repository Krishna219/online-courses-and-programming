#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int T;
    scanf("%d",&T);
    long long n[T],a[T],b[T],p[T][1000],i,j;
    for(i=0;i<T;i++)
        {
        scanf("%lld %lld %lld",&n[i],&a[i],&b[i]);
        long long k;
        for(j=0,k=n[i]-1;j<n[i];j++,k--)
            {
            if(a[i]<b[i])
                p[i][j]=k*a[i]+j*b[i];
            if(a[i]==b[i])
            {p[i][j]=k*a[i]+j*b[i];break;}
            else
                p[i][j]=k*b[i]+j*a[i];
        }
    }
    for(i=0;i<T;i++)
        {
        for(j=0;j<n[i];j++)
        {
            if(a[i]==b[i])
            {printf("%lld ",p[i][j]);break;}
            else
            printf("%lld ",p[i][j]);
        }
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
