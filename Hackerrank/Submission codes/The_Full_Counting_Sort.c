#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int array_size;
    scanf("%d", &array_size);
    int array[array_size], i,j,k;
    int count[100]= {0};
    char s[array_size][10], c[array_size][10];
    for(i=0;i<array_size;i++)
        scanf("%d %s",&array[i], s[i]);
    for(i=0;i<array_size;i++)
        if(i<array_size/2)strcpy(s[i],"-");
    k=0;
    for(i=0;i<100;i++)
        {
        for(j=0;j<array_size;j++)
            {
            if(array[j]==i)
                {
                count[i]+=1;
                strcpy(c[k],s[j]);
                k++;
            }
        }
    }
    for(i=0;i<array_size;i++)
        printf("%s ", c[i]);
    return 0;
}
