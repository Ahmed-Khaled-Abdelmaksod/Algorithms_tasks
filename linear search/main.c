/**
 * @author : Ahmed Khaled Abdelmaksod
 * @date   : 24/7/2023
 * @brief  : contains the implementation and test of linear search algorithm
*/
#include<stdio.h>
#include<stdlib.h>

/*____________________________ define section ____________________________*/
typedef signed int sint32_t;
typedef unsigned int uint32_t;
#define MAX_SIZE 10
/*____________________________ function section ____________________________*/
sint32_t linear_search_method_1(sint32_t data[],uint32_t length,sint32_t value);
sint32_t linear_search_method_2(sint32_t data[],uint32_t length,sint32_t value);

sint32_t data[MAX_SIZE] = {11,22,33,44,55,66,77,88,99,100};
// test of the algorithm
int main(void)
{
    sint32_t ret = 0;
    sint32_t value = 0;
    printf("Enter the value : ");
    scanf("%i",&value);
    ret = linear_search_method_1(data,MAX_SIZE,value);
    printf("%i\n",ret); 
    ret = linear_search_method_2(data,MAX_SIZE,value);
    printf("%i\n",ret);
    return 0;
}
/********************************************
 * @param : data   -> array of the data
 * @param : length -> the size array
 * @param : value  -> Value to be found
 * @retval : the index of data if found
 ********************************************
*/
sint32_t linear_search_method_1(sint32_t data[],uint32_t length,sint32_t value)
{
    uint32_t counter = 0;
    for(counter=0; counter<length ; counter++)
    {
        if(data[counter] == value)
        {
            return counter;
        }
    }
    return -1;
}


/********************************************
 * @param : data   -> array of the data
 * @param : length -> the size array
 * @param : value  -> Value to be found
 * @retval : the index of data if found
 ********************************************
*/

sint32_t linear_search_method_2(sint32_t data[],uint32_t length,sint32_t value)
{
    uint32_t right_index = length-1;
    uint32_t left_index = 0;

    while(left_index < right_index)
    {
        if(data[left_index] == value)
        {
            return left_index;
        }
        else if(data[right_index] == value)
        {
            return right_index;
        }
        left_index++;
        right_index--;
    }
    return -1;
}