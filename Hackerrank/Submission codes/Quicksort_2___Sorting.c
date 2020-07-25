#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int partition(int size, int *arr)
{
    /*printf("\n%d", size);*/
    int num;
    
    if(size <= 1)
        return 0;
    else if(size == 2)
        {
        if(*(arr + 1) < *arr)
            {
            int temp;
            temp = *(arr + 1);
            *(arr + 1) = *arr;
            *arr = temp;
            }
        for(num = 0; num < size; num++ )
            printf("%d ", *(arr + num));
        printf("\n");
        return 0;
        }
    
    int partition_element;
    partition_element = *arr;
    
    /*Varibales that store the sub array according to their respective criteria and keep track of element position of individual arrays*/
    int small_nums[size], small_num_pos, large_nums[size], large_num_pos;
    small_num_pos = 0;
    large_num_pos = 0;
    
    int sep_array[size];
    /*The following code seperates the array into two array. One contains all the elements that are lesser than the partion element and the other contains all the elements that are larger*/
    for(num = 1; num < size; num++ )
    {
        if(*(arr + num) < partition_element)
            {
            small_nums[small_num_pos] = *(arr + num);
            /*printf("%d ", small_nums[small_num_pos]);*/
            small_num_pos += 1;
            }
        if(*(arr + num) > partition_element)
            {
            large_nums[large_num_pos] = *(arr + num);
            /*printf("%d ", large_nums[large_num_pos]);*/
            large_num_pos += 1;
            }
    }

    
    int sep_array_pos;
    
    /*sorting the sub arrays using quick sort*/
    /*printf("%d %d\n", small_num_pos, large_num_pos);*/
    partition(small_num_pos, small_nums);
    partition(large_num_pos, large_nums);
    
    
    /*The following code combines the two seperate arrays*/
    
    /*First stores the elements from the small elements array*/
    for (sep_array_pos = 0; sep_array_pos < small_num_pos; sep_array_pos++ )
        {
        sep_array[sep_array_pos] = small_nums[sep_array_pos];
        /*printf("%d %d\n", sep_array_pos, sep_array[sep_array_pos]);*/
        }
    
       
    
    /*Inserting the partition element after it*/
    sep_array[sep_array_pos] = partition_element;
    /*printf("%d %d\n", sep_array_pos, sep_array[sep_array_pos]);*/
    
    /*Finally adding the large elements list to sep_array*/
    for (sep_array_pos = small_num_pos + 1; sep_array_pos < size; sep_array_pos++ )
        {
        sep_array[sep_array_pos] = large_nums[sep_array_pos - (small_num_pos + 1)];
        /*printf("%d %d\n", sep_array_pos, sep_array[sep_array_pos]);*/
        }
    
    for(num = 0; num < size; num++ )
        {
        *(arr + num) = sep_array[num];
        printf("%d ", *(arr + num));
        }
    printf("\n");
    
    return 0;
}
int main(void) 
{
    int array_size;
    scanf("%d", &array_size);
    /*printf("%d", array_size);*/
    int array[array_size], num;
    for(num = 0; num < array_size; num++ )
        scanf("%d", &array[num]);
    /*for(num = 0; num < array_size; num++ )
        printf("%d, ", array[num]);*/
    partition(array_size, array);
    return 0;
}

