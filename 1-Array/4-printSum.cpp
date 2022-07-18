#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4, 7, -10, 11};
    int size =  sizeof(arr) / sizeof(int);

    int sum = 0;

    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }

    cout << "sum = " << sum;
    return 0;
}