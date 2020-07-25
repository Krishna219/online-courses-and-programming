#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, n, c, m;
    scanf("%d", &t);
    while (t>0)
    {
        scanf("%d%d%d",&n,&c,&m);
        int answer = 0,d=0,rem=0,w;
        answer=n/c;
        d=answer;
        while(d/m)
        {answer+=d/m;
         d=d/m+d%m;}
        
        /** Write the code to compute the answer here. **/
        
        printf("%d\n",answer);
        t--;
    }
    return 0;
}
