#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int num = 0; num < t; num++)
        {
        int towns;
        scanf("%d", &towns);
        int routes;
        long long int total_routes = 1;
        for(int i = 1; i < towns; i++)
            {
            scanf("%d", &routes);
            total_routes = (total_routes % 1234567 * routes % 1234567);
            }
        printf("%lld\n", total_routes );
            
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
