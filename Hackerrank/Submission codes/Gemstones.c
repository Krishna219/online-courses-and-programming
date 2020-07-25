#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
 int count=0;
    char b;
    int i,j,l,N,k;
    scanf("%d",&N);
    char a[N][100];
    for(i=0;i<N;i++)
    scanf("%s",a[i]);
for(l=0;a[0][l]!='\0';l++)
{
    k=0;
    b=a[0][l];
    for(i=0;i<10;i++)
        {j=0;
    if(strchr(a[i],b)!='\0')
    {j+=1;k+=1;
    }
        }
   if(k==N)
       count+=1;
}
    printf("%d\n",count);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
