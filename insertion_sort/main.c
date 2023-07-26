/***************************************************************
 * @author : Ahmed Khlaed Abdelmaksod
 * @date : 26 / 7 / 2023
 * @brief : contains the implementation and test of insertion sort
*/


#include<stdio.h>
#include<stdlib.h>


// define section 
typedef unsigned int uint32;
typedef signed int sint32;
#define MAX_SIZE 10
// function decleration

void print_array(sint32 data[],uint32 length);
void insertion_sort(sint32 data[],uint32 length);


sint32 data[MAX_SIZE] = {8,4,9,5,7,2,6,3,1,0};

// start of testing
int main(void)
{
    print_array(data,MAX_SIZE);
    insertion_sort(data,MAX_SIZE);
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
 * @param : data -> the data to be sorted
 * @param : length -> the size of the array
 * @brief : used to sort the data by insertion sorting algorithm
 * @return : void .
 * ***************************************************
*/
// {8,4,9,5,7,2,6,3,1,0}
void insertion_sort(sint32 data[],uint32 length)
{
    sint32 inserted_element = 0;
    sint32 compared_index = 0;
    uint32 counter = 0;

    for(counter = 1 ; counter < length ; counter++)
    {
        inserted_element = data[counter];
        compared_index = counter - 1;
        while ((inserted_element < data[compared_index]) && (compared_index >=0))
        {
            data[compared_index + 1] = data[compared_index];
            compared_index--; 
        }
        data[compared_index + 1] = inserted_element;
    }
}
