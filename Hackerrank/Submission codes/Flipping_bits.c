#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T, i;
    scanf("%d", &T);
    unsigned int a;
    for(i=0;i<T;i++)
        {
        scanf("%u",&a);
        a=~a;
        printf("%u\n",a);
    }
    return 0;
}
