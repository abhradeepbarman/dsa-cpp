#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] < key)
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int even[6] = {3, 9, 12, 27, 54, 98};
    int odd[5] = {3, 9, 12, 27, 54};

    cout << binarySearch(even, 6, 54) << endl;
    cout << binarySearch(odd, 5, 12) << endl;

    return 0;
}