#include <iostream>

using namespace std;

int main(void)
{
    int size = 0;
    cout << "Enter the size of the array \n";
    cin >> size;
    float *arr = new float[size];
    arr[0] = 1;
    int factorial = 2;
    for (int i = 1; i < size; i++)
    {
        factorial *= i;
        arr[i] = 1.0 / factorial;
    }
    // print data
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    delete[] arr;
    getchar();
    return 0;
}