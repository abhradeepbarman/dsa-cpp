#include<bits/stdc++.h>
using namespace std;

// Array with function
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Declare 
    int arr[5];

    //accesing an array element 
    cout << arr[4] << endl;   // -> garbage value

    // initialization 
    int secondArr[3] = {4, 7, 9};
    cout << secondArr[2] << endl;

    // printing the Array 
    int thirdArr[15] = {1,5};
    printArray(thirdArr, 15);

    // initializing all elements with 0
    int fourthArr[10] = {0};
    int size = sizeof(fourthArr)/sizeof(int);
    printArray(fourthArr, size);

    // initializing all elements with 1




    return 0;
}