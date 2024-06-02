#include <iostream>

using namespace std;

int findmax(int arr[], int size)
{
    // base condition
    if (size == 1)
    {
        return arr[0];
    }

    return max(arr[size - 1], findmax(arr, size - 1));
}

int main(void)
{
    int arr[] = {2, 5, 4, 7, 6, 8, 15, 5, 7};
    cout << "Max number is : " << findmax(arr, sizeof(arr) / sizeof(int));
    getchar();
    return 0;
}