#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/*
 * Complete the function below.
 */
int main() {
    unsigned long long res,l,r,i,j,maxxor=0;
    scanf("%llu %llu",&l,&r);
    for(i=l;i<=r;i++)
        {
        for(j=l;j<=r;j++)   
            {
            res=i^j;
            if(res>maxxor)
            maxxor=res;
        }
    }    
    printf("%llu",maxxor);
    return 0;
}
