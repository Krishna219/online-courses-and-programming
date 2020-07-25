#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
int i,j,k,no_of_persons,no_of_subjects,count=0,max_sub_known=0;
    scanf("%d %d",&no_of_persons,&no_of_subjects);
    char a[no_of_persons][no_of_subjects];
    int sub_known[no_of_persons][no_of_subjects];
    for(i=0;i<no_of_persons;i++)
        scanf("%s",a[i]);
    for(i=0;i<no_of_persons;i++)
        {
        for(j=no_of_persons-1;j>i;j--)
            {
            sub_known[i][j]=0;
            for(k=0;k<no_of_subjects;k++)
                {
                if(a[i][k]=='1'||a[j][k]=='1')
                    sub_known[i][j]+=1;
                if(sub_known[i][j]>max_sub_known)
                    max_sub_known=sub_known[i][j];
                }
            }
        }
    for(i=0;i<no_of_persons;i++)
        {
        for(j=no_of_persons-1;j>i;j--)
            {
            if(sub_known[i][j]==max_sub_known)
                count+=1;
            }
        }
    
        printf("%d\n%d",max_sub_known,count);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
