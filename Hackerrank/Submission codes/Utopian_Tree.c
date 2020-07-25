#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int Growth()
    {
    int N,G=1,i;
        scanf("%d",&N);
        for(i=1;i<=N;i++)
            {
            if(i%2==0)
            G+=1;
            else
            G*=2;
 
        }
    return G;
}
int main() {
int T,G[11],X;
    scanf("%d",&T);
    X=T;
    while(T>0)
        {
        G[T]=Growth();
        T--;
    }
    while(X>0)
        {
        printf("%d\n",G[X]);
        X--;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
