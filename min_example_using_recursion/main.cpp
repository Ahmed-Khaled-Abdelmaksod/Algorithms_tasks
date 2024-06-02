/**
 * @author  : Ahmed Khaled Abdelmaksod Ebrahim
 * @date    : 2 NOV 2023
 * @brief   : implementation of finding the smallest number in an array using recursion
 */

#include <iostream>

using namespace std;
// O(n)
int find_min(int arr[], int start, int end)
{
    if (end == start)
    {
        return arr[start];
    }
    int mid = (start + end) / 2;
    int min1 = find_min(arr, 0, mid);
    int min2 = find_min(arr, mid + 1, end);

    return min(min1, min2);
}
int main(void)
{

    int arr[] = {1, 2, 5, 8, 4, -8, 5, 4};
    cout << "min is " << find_min(arr, 0, 7); // -8

    return 0;
}