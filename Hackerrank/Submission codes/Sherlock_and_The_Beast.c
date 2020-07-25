#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int T,i;
    scanf("%d",&T);
for(i=0;i<T;i++)
    {
    int N,j,new_number=2;
    scanf("%d",&N);
    int a[N];
    if(N%3==0)
        {
        for(j=0;j<N;j++)
            a[j]=5;
        }
    else if(N%5==0)
        {
        if(N>15)
            {
            int rem=0;
            rem=N%15;
            new_number=N-rem;
            for(j=0;j<new_number;j++)
                a[j]=5;
            for(j=new_number;j<N;j++)
                a[j]=3;
            }
        else
            {
            for(j=0;j<N;j++)
                a[j]=3;
            }
        }
    else
        {
        int rem=0;
        new_number=N-5;
        while(new_number>0)
            {
            if(new_number%3==0)
                {
                for(j=0;j<new_number;j++)
                    a[j]=5;
                for(j=new_number;j<N;j++)
                    a[j]=3;
                break;
                }
            new_number-=5;
            }
        if(new_number<0)
        {printf("-1");new_number=1;}
        }
    if(new_number!=1)
        {
        for(j=0;j<N;j++)
            printf("%d",a[j]);
        }
    printf("\n");
    }
        
        

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
