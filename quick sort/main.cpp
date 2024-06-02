/**
 * @author  : Ahmed Khaled Abdelmaksod Ebrahim
 * @date    : 3 NOV 2023
 * @brief   : implementation of Quick Sort
 */

#include <iostream>
using namespace std;
// helper function
template <class t>
void swap_quiksort(t x[], int first, int second)
{
    int temp = x[first];
    x[first] = x[second];
    x[second] = temp;
}
template <class t>
int partition(t x[], int left, int right)
{
    t pivot;
    int index, small_index;
    swap_quiksort(x, left, (left + right) / 2);
    pivot = x[left];
    small_index = left;
    for (int i = left + 1; i <= right; i++)
    {
        if (x[i] < pivot)
        {
            small_index++;
            swap_quiksort(x, i, small_index);
        }
    }
    swap_quiksort(x, left, small_index);
    return small_index;
}
template <class t>
void quick_sort(t x[], int left, int right)
{
    int pivot_index = 0;
    if (left < right)
    {
        pivot_index = partition(x, left, right);
        quick_sort(x, left, pivot_index - 1);
        quick_sort(x, pivot_index + 1, right);
    }
}
int main(void)
{
    // test of quick sort
    int data[10] = {5, 2, 8, -9, 9, 54, 3, 7, 66, 25};
    quick_sort(data, 0, 9);
    cout << "data : ";
    for (int i = 0; i < 10; i++)
    {
        cout << data[i] << " ";
    }
    return 0;
}