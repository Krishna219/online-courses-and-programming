#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int k,test_case;
    scanf("%d",&test_case);
    for(k = 1; k <= test_case ; k++)
    {
        long long length,i,j,count = 1, character;
        int rev[1000000], balls[1000000];
        scanf("%lld %lld", &length, &character);
        for(i = 0;i < length; i++)
        {balls[i] = i; rev[i] = i;}
        for(count = 0; count < length; count++)
        {
            for(i = count, j = length - 1; i < length; i++, j--)
                {rev[i] = balls[j];}
            for(i = 0;i < length; i++)
                balls[i] = rev[i];
        }
        for(i = 0;i < length; i++)
            {
            if(rev[i] == character)
                {printf("%lld",i);break;}
        }
        printf("\n");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
