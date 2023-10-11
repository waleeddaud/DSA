// This code implements the basic bubble sort algorithm
// This has time complexity O(n^2) and space complexity O(1)
// After optimization,then for best case(i.e; input array is sorted) time complexity is O(n)
// It is a stable algorithm
#include <iostream>
using namespace std;
void readArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    int n = size - 1;
    bool sorted = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                sorted = true;
            }
        }
        if (sorted == false)
        {
            // if already sorted
            break;
        }
    }
    readArray(arr, size);
    return 0;
}