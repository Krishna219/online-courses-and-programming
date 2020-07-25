#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, c;
    int i;
    
    scanf("%d",&c);
    
    scanf("%d",&a);

    int array[a];
    
    for(i = 0;i < a;i++)
        scanf("%d",&array[i]);
    for(i = 0;i < a;i++)
        {
        if(c == array[i])
            printf("%d", i);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
