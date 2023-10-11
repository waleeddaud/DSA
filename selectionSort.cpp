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
        int n = 5;
        int arr[n] = {1, 7, 3, 2, 9};
        for (int i = 0; i < n - 1; i++)
        {
            int compare = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[compare])
                    compare = j;
            }
            swap(arr[i], arr[compare]);
        }
        readArray(arr, n);
        return 0;
    }
