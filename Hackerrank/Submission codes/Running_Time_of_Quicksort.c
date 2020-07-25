#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int NUMBER_OF_SHIFTS = 0;
int ARRAY_SIZE;
int QUICK_SORT_COUNT = 0;
int ARRAY[5000];

void insertionSort(int size, int *arr)
{
    /*printf("%d %d", size, *(arr + 3));*/
    
    /*variables that store the value of the right most element in the array and its position which is one less than size note array always stores from (0, size - 1)*/
    for(int pos = 1; pos < ARRAY_SIZE; pos++)
        {
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
}
int print_array(int array_size, int *arr)
{
    for(int num = 0; num < array_size; num++)
        printf("%d ", *(arr + num));
    printf("\n");
    
    return 0;
}

int swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return 0;
}

int partition(int size, int *arr)
{
    int pivot_element, num;
    int small_elements = 0;
    
    if(size <= 1)
        return 0;
    /*else if(size == 2)
        {
        if(*(arr + 1) < *arr)
            swap(arr, (arr + 1));
        return 0;
        }*/
    
    pivot_element = *(arr + size - 1);
    /*printf("%d\n", pivot_element);*/
    
    /*partitioning elements before the pivot element*/
    for( num = 0; num < size; num++)
        {
        if(*(arr + num) < pivot_element)
            {
            swap((arr + num), (arr + small_elements));
            QUICK_SORT_COUNT += 1;
            small_elements += 1;
            }
        
        }
    
    *(arr + size - 1) = *(arr + small_elements);
    *(arr + small_elements) = pivot_element;
    QUICK_SORT_COUNT += 1;
    
    /*print_array(ARRAY_SIZE, ARRAY);*/
    /*printf("\t%d\n", small_elements);*/   
    
    /*partition left side elements*/
    partition(small_elements, arr);
        
    /*partition right side elements*/
    /*printf("\n%d", size - 1);*/
    partition(size - small_elements - 1, &(*(arr + small_elements + 1)));
    return 0;    
}
int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    /*printf("%d\n", array_size);*/
    scanf("%d", &ARRAY_SIZE);
    int num, array[ARRAY_SIZE];
    for( num = 0; num < ARRAY_SIZE; num++ )
        {
        scanf("%d", &ARRAY[num]);
        array[num] = ARRAY[num];
    }
    /*print_array(array_size, array);*/
   
    partition(ARRAY_SIZE, ARRAY);
    /*printf("\n%d", QUICK_SORT_COUNT);*/
    insertionSort(ARRAY_SIZE, array);
    /*printf("\n%d", NUMBER_OF_SHIFTS);*/
    
    printf("%d", NUMBER_OF_SHIFTS - QUICK_SORT_COUNT);
    return 0;
}
