#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int a[100000];
int max(int x,int y)
    {
    int i,less=3;
    for(i=x;i<=y;i++)
        {
        if(a[i]<less)
            less=a[i];
    }
    return less;
}
int main() {
    int l,T;
    scanf("%d%d",&l,&T);
int i,en[T],ex[T],m[T];
    for(i=0;i<l;i++)
        scanf("%d",&a[i]);
    for(i=0;i<T;i++)
        {
    scanf("%d%d",&en[i],&ex[i]);
        m[i]=max(en[i],ex[i]);
    }
    for(i=0;i<T;i++)
        printf("%d\n",m[i]);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
