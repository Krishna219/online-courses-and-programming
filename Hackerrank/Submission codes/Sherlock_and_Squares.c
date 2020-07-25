#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
   int t;
    scanf("%d",&t);
    int c[t],i;
    long long a[t],b[t],j,rem=0;
    for(i=0;i<t;i++)
        {
        c[i]=0;
        scanf("%lld %lld",&a[i],&b[i]);
        for(j=a[i];j<=b[i];j++)
            {
            rem=(long long)(sqrt(j)*1000000);
            if(rem%1000000==0)
            c[i]+=1;
        }
        
    }
    for(i=0;i<t;i++)
        printf("%d\n",c[i]);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
