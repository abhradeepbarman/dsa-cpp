#include<bits/stdc++.h>
using namespace std;

void sortOne(int arr[], int size){

    int left=0; 
    int right= size-1;
    
    while(left<=right){
        if(arr[left] == 0){
            left++;
        }

        else if(arr[right] == 1){
            right--;
        }

        else if(arr[left] == 1 && arr[right] == 0){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {0, 1, 0, 1, 1, 0, 1, 1, 0};
    int size = sizeof(arr) / sizeof(int);

    sortOne(arr, size);
    printArray(arr, size);  

    return 0;
}