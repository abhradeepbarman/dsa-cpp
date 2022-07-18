#include<bits/stdc++.h>
using namespace std;

void update(int arr[], int size){

    // update 
    arr[0] = 120;

    cout << "printing update function" << endl;

    // printing the array 
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    } cout << endl;

}

int main()
{
    int arr[3] = {1,2,3};

    update(arr,3);

    cout << "printing main function" << endl;

    // printing the array 
    for(int i=0; i<3; i++){
        cout << arr[i] << " ";
    }

    return 0;
}