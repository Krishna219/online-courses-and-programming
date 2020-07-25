#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
long long T;
    scanf("%lld",&T);
    while(T>0)
        {
        char a[100],*b,c[100]="\0";
        int i,if_not=0;
        scanf("%s",a);
        for(i=strlen(a)-2;i>=0;i--)
            {
            if(a[i]<a[i+1])
                {
                char local;
                int j,k,diff,large=25;
                if_not+=1;
                b=strrchr(a,a[i]);
                strncpy(c,a,strlen(a)-strlen(b));
                printf("%s",c);
                for(j=1;j<strlen(b);j++)
                    {
                    diff=*b-*(b+j);
                    if(abs(diff)<large)
                        {large=abs(diff);local=*(b+j);}
                    }
                printf("%c",local);
                for(j=0;j<strlen(b);j++)
                    {
                    for(k=strlen(b)-1;k>j;k--)
                        {
                        if(*(b+j)>*(b+k))
                            {
                            char swap;
                            swap=*(b+j);
                            *(b+j)=*(b+k);
                            *(b+k)=swap;
                            }  
                        }
                    }
                for(j=0;j<strlen(b);j++)
                    {
                    if(*(b+j)!=local)
                        printf("%c",*(b+j));
                    }
                break;
                }
        }
        if(if_not==0)
            printf("no answer");
        printf("\n");
        T-=1;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
