// Program to frequency of an element

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
    cout<<"Enter element to find frequency: ";
    cin>>element;

    int frequency = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == element){
            frequency++;
        } 
    }
    cout<<"Frequency of element is: "<<frequency;

    return 0;
}