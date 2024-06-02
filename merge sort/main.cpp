/**
 * @author  : Ahmed Khaled Abdelmaksod Ebrahim
 * @date    : 3 NOV 2023
 * @brief   : merge sort implementation
 */

#include <iostream>
using namespace std;

// helper method !!!

void merge(int x1[], int left1, int right1,
           int x2[], int left2, int right2,
           int x[], int left)
{
    int i1 = left1;
    int i2 = left2;
    int i = left;
    while ((i1 <= right1) && (i2 <= right2))
    {
        if (x1[i1] <= x2[i2])
        {
            x[i] = x1[i1];
            i1++;
            i++;
        }
        else
        {
            x[i] = x2[i2];
            i2++;
            i++;
        }
    }
    if (i1 <= right1)
    {
        while (i1 <= right1)
        {
            x[i] = x1[i1];
            i1++;
            i++;
        }
    }
    if (i2 <= right2)
    {
        while (i2 <= right2)
        {
            x[i] = x2[i2];
            i2++;
            i++;
        }
    }
}
// merge sort function using recursion

void mergesort(int x[], int y[], int left, int right)
{
    // base condition (non recursive condition)
    if (left == right)
    {
        y[left] = x[left];
        return; // stop
    }
    int mid = (left + right) / 2;
    int *temp = new int[right + 1];
    mergesort(x, temp, left, mid);
    mergesort(x, temp, mid + 1, right);
    merge(temp, left, mid, temp, mid + 1, right, y, left);
}

int main(void)
{
    // test merge method :)
    int x1[] = {1, 2, 3, 5, 8, 15, 56, 60, 70, 78};
    int x2[] = {3, 4, 6, 9, 14, 20};
    int x[16];
    merge(x1, 0, 9, x2, 0, 5, x, 0);
    for (int i = 0; i < 15; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
    // test mergesort :)
    int data[] = {55, 1, 8, 4, 6, 7, 2, 5, 6, 70};
    int sorted[10];
    mergesort(data, sorted, 0, 9);
    cout << "Non sorted \n";
    for (int i = 0; i < 10; i++)
    {
        cout << data[i] << " ";
    }
    cout << "\n";
    cout << "sorted \n";
    for (int i = 0; i < 10; i++)
    {
        cout << sorted[i] << " ";
    }
    return 0;
}