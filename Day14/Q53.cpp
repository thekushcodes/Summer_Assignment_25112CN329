// Program to Linear search

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

    int element;
    cout<<"Enter element to search: ";
    cin>>element;

    int flag = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == element) cout<<"ELement found at index: "<<i;
        flag = 1;
        break;
    }
    if(flag == -1) cout<<"Element not found";

    return 0;
}