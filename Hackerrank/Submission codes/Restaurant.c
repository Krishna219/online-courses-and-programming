#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int test_cases, i;
    scanf("%d", &test_cases);
    for(i = 0;i < test_cases; i++)
        {
        long cake_length, cake_width;
        scanf("%ld %ld", &cake_length, &cake_width);
        long long area, j, square, max_square = 0, loop, rem;
        area = cake_length * cake_width;
        loop = sqrt(area);
        for(j = 1; j <= loop; j++)
            {
            square = pow(j,2);
            rem = area % square;
            if(area % square == 0 && cake_length % j == 0 && cake_width % j == 0)
                max_square = square;
            }
        long number_of_squares;
        number_of_squares = area / max_square;
        printf("%ld\n", number_of_squares);
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
