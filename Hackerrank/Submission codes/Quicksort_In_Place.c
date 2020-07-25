#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ARRAY_SIZE;

int ARRAY[5000];

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
    else if(size == 2)
        {
        if(*(arr + 1) < *arr)
            swap(arr, (arr + 1));
        return 0;
        }
    
    pivot_element = *(arr + size - 1);
    /*printf("%d\n", pivot_element);*/
    
    /*partitioning elements before the pivot element*/
    for( num = 0; num < size; num++)
        {
        if(*(arr + num) < pivot_element)
            {
            swap((arr + num), (arr + small_elements));
            small_elements += 1;
            }
        
        }
    
    *(arr + size - 1) = *(arr + small_elements);
    *(arr + small_elements) = pivot_element;
    
    print_array(ARRAY_SIZE, ARRAY);
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
    int num;
    for( num = 0; num < ARRAY_SIZE; num++ )
        scanf("%d", &ARRAY[num]);
    
    /*print_array(array_size, array);*/
   
    partition(ARRAY_SIZE, ARRAY);
         
    return 0;
}
