/**
 * @author : Ahmed Khaled Abdelmaksod
 * @date   : 24/7/2023
 * @brief  : contains the implementation and test of binary search algorithm
*/

#include<stdio.h>
#include<stdlib.h>

/*____________________________ define section ____________________________*/
typedef signed int sint32_t;
typedef unsigned int uint32_t;
#define MAX_SIZE 10

/*____________________________ function section ____________________________*/
sint32_t binary_search_1(sint32_t data[],uint32_t start_index,uint32_t end_index,uint32_t value);
sint32_t binary_search_2(sint32_t data[],uint32_t start_index,uint32_t end_index,uint32_t value);
sint32_t data[MAX_SIZE] = {11,22,33,44,55,66,77,88,99,100};
// test binary search
int main(void)
{
    sint32_t value =0;
    uint32_t index =0;
    printf("value : ");
    scanf("%i",&value);
    index = binary_search_1(data,0,MAX_SIZE-1,value);
    printf("Index: %i\n",index);
    index = binary_search_2(data,0,MAX_SIZE-1,value);
    printf("Index: %i\n",index);
    return 0;
}

sint32_t binary_search_1(sint32_t data[],uint32_t start_index,uint32_t end_index,uint32_t value)
{
    uint32_t middle_index = 0;
    while (start_index <= end_index)
    {
        middle_index = start_index + ((end_index - start_index)/2);
        if(data[middle_index] == value)
        {
            return middle_index;
        }
        else if (data[middle_index] < value)
        {
            start_index = middle_index + 1;
        }
        else if(data[middle_index] > value)
        {
            end_index = middle_index - 1;
        }
    }
    
return -1;
}

// implemention of binary search using recursion

sint32_t binary_search_2(sint32_t data[],uint32_t start_index,uint32_t end_index,uint32_t value)
{
    uint32_t middle_index = 0;
    
    middle_index = start_index + ((end_index - start_index)/2);
    if(start_index > end_index)
    {
        return -1;
    }
    if(data[middle_index] == value)
    {
        return middle_index;
    }
    else if (data[middle_index] < value)
    {
        
        return binary_search_2(data,middle_index + 1,end_index,value);
    }
    else if(data[middle_index] > value)
    {
        return binary_search_2(data,start_index,middle_index - 1,value);
    }
}