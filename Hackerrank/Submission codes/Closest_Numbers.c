#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int T;
    scanf("%d", &T);
    long int array[T], a[T-1], b[T-1], i, j, k;
    unsigned long diff;
    for(i=0;i<T;i++)
        scanf("%ld",&array[i]);
    k=0;
    diff = ~0;
    for(i=0;i<T;i++)
        {
        for(j=i+1;j<T;j++)
            {
            long int temp = abs(array[i] - array[j]);
            if(temp < diff)
                {
                diff = temp;
                k = 0;
                a[k] = array[i];
                b[k] = array[j];
                k++;
            }
            else if (temp == diff)
                {
                a[k] = array[i];
                b[k] = array[j];
                k++;
            }
        }
    }
    for(i=0;i<k;i++)
        a[k+i]=b[i];
    for(i=0;i<2*k;i++)
        {
        for(j=i;j<2*k;j++)
            {
            if(a[i] > a[j])
                {
                long temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
        
    for(i=0;i<2*k;i++)
        printf("%ld ", a[i]);
    return 0;
}
