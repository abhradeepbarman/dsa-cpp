#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int size, int key){

    for(int i=0; i<size; i++){

        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[6] = {5, -2, 4, 9, -7, 0};
    int size = sizeof(arr) / sizeof(int);

    int key;
    cout << "Enter key: ";
    cin >> key;

    bool found = linearSearch(arr, size, key);

    if(found)
        cout << "Key is present";
    else
        cout << "Key is absent";


    return 0;
}