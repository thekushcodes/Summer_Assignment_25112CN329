// Program to input and display array

#include<iostream>
using namespace std;

int main(){
    int terms;
    cout<<"Enter number to elements: ";
    cin>>terms;

    int arr[terms];
    for(int i = 0; i < terms; i++){
        cout<<"Enter element "<<i<<": ";
        cin>>arr[i];
    }
    for(int i = 0; i < terms; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}