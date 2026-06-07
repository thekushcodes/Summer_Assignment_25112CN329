// Program to find largest and smallest element

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }

    int largest = arr[0], smallest = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > largest) largest = arr[i];
        if(arr[i] < smallest) smallest = arr[i];
    }
    cout<<"Smallest element: "<<smallest<<endl;
    cout<<"Largest element: "<<largest<<endl;
    return 0;
}