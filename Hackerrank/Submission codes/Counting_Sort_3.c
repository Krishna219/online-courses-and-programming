#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int array_size;
    scanf("%d", &array_size);
    int array[array_size], i,j;
    int count[100]= {0};
    char s[array_size][10];
    for(i=0;i<array_size;i++)
        {
        scanf("%d",&array[i]);
        scanf("%s", s[i]);
    }
    for(i=0;i<100;i++)
        {
        for(j=0;j<array_size;j++)
            {
            if(array[j]<=i)
                count[i]+=1;
        }
    }
    /*for(i=0;i<100;i++)
        printf("%d ", array[i]);
    printf("\n");*/
    for(i=0;i<100;i++)
        printf("%d ", count[i]);
    return 0;
}
