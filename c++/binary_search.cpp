#include<iostream>
#include<algorithm>
using namespace std;


int binary_search(int arr[], int key, int size){

    int start = 0, end = size - 1;

    int mid = start + (end - start)/2;

    while(start<=end){
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        if (key == arr[mid])
        {
            return mid;
        }

        mid = start + (end - start)/2;
        
        cout <<"\n" << "Key matched with index: " << mid ;
    }

    return -1;
}


int main(){

    int key, size;

    cout<<"Enter the size of array: " << endl;
    cin>>size;

    int arr[size];


    cout<< "Enter the array: "<< endl;
    for (int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<< "Enter the number you want to find: " << endl;
    cin>>key;

    sort(arr, arr + size);

    cout << "Sorted array: ";
    for (int i=0; i<size; i++)
    {
        cout<< arr[i] <<" ";
    }

    binary_search(arr,key, size);
}