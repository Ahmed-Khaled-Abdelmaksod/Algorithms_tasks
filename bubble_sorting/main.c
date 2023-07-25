/***************************************************************
 * @author : Ahmed Khlaed Abdelmaksod
 * @date : 25 / 7 / 2023
 * @brief : contains the implementation and test of bubble sort
*/

#include<stdio.h>
#include<stdlib.h>


// define section 
typedef unsigned int uint32;
typedef signed int sint32;
#define MAX_SIZE 10
// function decleration

void print_array(sint32 data[],uint32 length);
void swap(sint32 *ptr1,sint32 *ptr2);
void bubble_sort(sint32 data[],uint32 length);


sint32 data[MAX_SIZE] = {8,4,9,5,7,2,6,3,1,0};

// start of testing
int main(void)
{
    print_array(data,MAX_SIZE);
    bubble_sort(data,MAX_SIZE);
    print_array(data,MAX_SIZE);
    return 0;
}

/*****************************************************
 * @param : data -> the data to be sorted
 * @param : length -> the size of the array
 * @brief : used to print the data 
 * @return : void .
 * ***************************************************
*/
void print_array(sint32 data[],uint32 length)
{
    uint32 counter =0 ;
    for(counter =0;counter<length;counter++)
    {
        printf("%i ",data[counter]);
    }
    printf("\n");
}

/*****************************************************
 * @param : ptr to the first var
 * @param : ptr to the second var
 * @brief : used to swap the data 
 * @return : void .
 * ***************************************************
*/
void swap(sint32 *ptr1,sint32 *ptr2)
{
    sint32 temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}


/*****************************************************
 * @param : data -> the data to be sorted
 * @param : length -> the size of the array
 * @brief : used to sort the data by bubble sorting algorithm
 * @return : void .
 * ***************************************************
*/

void bubble_sort(sint32 data[],uint32 length)
{
    uint32 counter_outer = 0;
    unsigned int counter_inner = 0;
    char flag = 0;
    for(counter_outer = 0; counter_outer < length;counter_outer++)
    {
        for(counter_inner = 0 ; counter_inner < (length - 1 - counter_outer) ; counter_inner++)
        {
            if(data[counter_inner] > data[counter_inner + 1])
            {
                swap(&data[counter_inner],&data[counter_inner+1]);
                flag = 1;                
            }
        }
        if(flag == 0)
        {
            break;
            //return;
        }
    }
}
