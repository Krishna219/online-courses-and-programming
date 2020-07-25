#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int T;
    scanf("%d", &T);
    for(int i = 0; i<T;i++)
        {
        int N;
        scanf("%d", &N);
        int even_divisors = 0;
        if(N%2!=0)
            {
            printf("%d\n",even_divisors);
            continue;
        }
        even_divisors = 1;
        for(int j = 2; j<=N/2;j+=2)
            if(N%j==0)even_divisors+=1;
        printf("%d\n",even_divisors);
    }
    return 0;
}
