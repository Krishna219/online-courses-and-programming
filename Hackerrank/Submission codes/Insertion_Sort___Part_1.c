#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int size, int *arr)
{
    /*printf("%d %d", size, *(arr + 3));*/
    
    /*variables that store the value of the right most element in the array and its position which is one less than size note array always stores from (0, size - 1)*/
    
    int right_most_element, element_pos;
    element_pos = size - 1;
    right_most_element = *(arr + element_pos);
        
    /*printf("%d %d\n", element_pos, right_most_element);*/
    while (element_pos >= 0)
    {   
        /*printf("\n%d %d\n", element_pos, *(arr + element_pos));*/
        
        if(*(arr + element_pos) > right_most_element)
        {
            /*shifting the elemnent that is greater than the right most element by one position to the right*/
            *(arr + element_pos + 1) = *(arr + element_pos);
            if( element_pos == 0)
            {
            /*This case arises when no element is lesser than the right most element. In that case shift the element to the next right position and place the right most element in that position*/

            *(arr + element_pos) = right_most_element; 
            }
            for(int num = 0; num < size; num++ )
                printf("%d ", *(arr + num));
            printf("\n");
            
        }
        else if(*(arr + element_pos) < right_most_element)
        {
            /*placing the right most element in the position next to the current element position*/
            *(arr + element_pos + 1) = right_most_element;
             for(int num = 0; num < size; num++ )
                printf("%d ", *(arr + num));
            printf("\n");
        }
        
        element_pos -= 1;
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
    insertionSort(array_size, array);
    return 0;
}
