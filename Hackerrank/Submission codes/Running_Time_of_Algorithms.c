#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int NUMBER_OF_SHIFTS = 0;
void insertionSort(int size, int *arr, int pos)
{
    /*printf("%d %d", size, *(arr + 3));*/
    
    /*variables that store the value of the right most element in the array and its position which is one less than size note array always stores from (0, size - 1)*/
    
    int right_most_element, element_pos;
    element_pos = pos;
    right_most_element = *(arr + element_pos);
        
    /*printf("%d %d\n", element_pos, right_most_element);*/
    for(element_pos = pos - 1; element_pos >= 0; element_pos--)
    {   
        /*printf("\n%d %d\n", element_pos, *(arr + element_pos));*/
        
        if(*(arr + element_pos) > right_most_element)
        {
            /*shifting the elemnent that is greater than the right most element by one position to the right*/
            *(arr + element_pos + 1) = *(arr + element_pos);
            NUMBER_OF_SHIFTS += 1;
            /*for(int num = 0; num < size; num++ )
                printf("%d ", *(arr + num));
            printf("\n");*/
            
            
            if( element_pos == 0)
            {
            /*This case arises when no element is lesser than the right most element. In that case shift the element to the next right position and place the right most element in that position*/

            *(arr + element_pos) = right_most_element;
                /*for(int num = 0; num < size; num++ )
                printf("%d ", *(arr + num));
            printf("\n");*/
            }
            
        }
        else if(*(arr + element_pos) < right_most_element)
        {
            /*placing the right most element in the position next to the current element position*/
            *(arr + element_pos + 1) = right_most_element;
             /*for(int num = 0; num < size; num++ )
                printf("%d ", *(arr + num));
            printf("\n");*/
            break;
        }
    }
}

int main(void) 
{
    int array_size;
    scanf("%d", &array_size);
    /*printf("%d", array_size);*/
    int num, array[array_size];
    for(num = 0; num < array_size; num++ )
        scanf("%d", &array[num]);
    /*for(num = 0; num < array_size; num++ )
        printf("%d", array[num]);*/
    for(num = 1; num < array_size; num++ )
        insertionSort(array_size, array, num);
    printf("%d", NUMBER_OF_SHIFTS);
    return 0;
}
