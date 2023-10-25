/*This written code checks if the given array is sorted(non decrasing) and rotated*/
/*It find the pair for which arr[i-1]>arr[i]. If that count is greater than 1 then the
array is not sortedRotated .If it is equal to 1 then it is sortedRotated. And if count 
is equal to zero then the array contains identical elements and it returns true*/
#include <iostream>
#include <vector>
using namespace std;
bool sortedRotated(vector<int> a)
{
    int n = a.size();
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
            count++;
    }
    if (a[n - 1] > a[0])
        count++;
    return count <= 1;
}
int main()
{
    vector<int> arr1 = {3, 5, 7, 1, 2};
    vector<int> arr2 = {3, 1, 7, 1, 2};
    cout << boolalpha << sortedRotated(arr1) << endl;
    cout << boolalpha << sortedRotated(arr2) << endl;
    return 0;
}