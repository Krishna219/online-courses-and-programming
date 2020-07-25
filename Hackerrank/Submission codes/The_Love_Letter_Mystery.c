#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>
char S[10][10000];
int plain(int X)
    {
    int l=0,i,a,count=0;
    while(S[X][l]!='\0')
        l++;
    a=l;
    for(i=0;i<a;i++)
        {
        AGAIN:
        if(S[X][i]<S[X][a-i-1])
            {
            if(S[X][a-i-1]>97)
            {S[X][a-i-1]-=1;count+=1;goto AGAIN;}
            else continue;
    }
}
    return count;
}
int main() {
int T,i;
    scanf("%d",&T);
    int c[T];
    for(i=0;i<T;i++)
        {
        scanf("%s",S[i]);
        c[i]=plain(i);
    }
    for(i=0;i<T;i++)
   printf("%d\n",c[i]);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
