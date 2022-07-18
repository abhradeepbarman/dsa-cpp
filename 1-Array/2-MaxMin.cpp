#include<bits/stdc++.h>
using namespace std;

int getMax(int arr[], int size){
    
    int maxValue = arr[0];

    for(int i=1; i<size; i++){
        maxValue = max(maxValue, arr[i]);
    }

    return maxValue;
}

int getMin(int arr[], int size){
    
    int minValue = arr[0];
    for(int i=1; i<size; i++){
        minValue = min(minValue, arr[i]);
    }
    
    return minValue;
}

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[100];

    // taking input 
    cout << "Enter " << size << " values: " << endl;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    cout << "Maximum value = " << getMax(arr,size) << endl;
    cout << "Minimum value = " << getMin(arr,size) << endl;

    return 0;
}