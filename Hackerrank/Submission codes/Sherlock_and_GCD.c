#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
long s,t,n,c[100];
    scanf("%ld",&t);
    s=t;
    while(t>0)
        {
        scanf("%ld",&n);
        long i,j,a[n],x=0;
        for(i=0;i<n;i++)
        scanf("%ld",&a[i]);
        for(i=0;i<n;i++)
            {
            for(j=0;j<n;j++)
                {
                if(a[i]!=a[j])
                    {int rem,num,den;
                     if(a[i]>a[j])
                     {num=a[i];den=a[j];rem=a[i]%a[j];}
                     if(a[j]>a[i])
                     {num=a[j];den=a[i];rem=a[j]%a[i];}
                     while(rem!=0)
                         {
                         num=den;
                         den=rem;
                         rem=num%den;
                        }
                     if(den==1)
                         c[t-1]=1;
                     }
                }
            }
        t-=1;
        }
      while(s>0)
        {
        if(c[s-1]==1)
            printf("YES\n");
        else
            printf("NO\n");
          s--;
    }  
   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
