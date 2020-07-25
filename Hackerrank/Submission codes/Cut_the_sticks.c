#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int N;
    scanf("%d",&N);
    int a[N],b,i;
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    b=N;
    while(b>0)
        {
        int c=0,j,x=0;
        for(j=0;j<N;j++)
            c+=a[j];
        if(c==0)
            break;
        for(j=0;j<N;j++)
            {if(a[j]<c&&a[j]>0)
                c=a[j];
            if(a[j]==0)
            x+=1;}
        b=N-x;
        printf("%d\n",b);
        for(j=0;j<N;j++)
        {if(a[j]!=0)
            a[j]-=c;
         }
        
        
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
