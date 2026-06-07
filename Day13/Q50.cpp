// Program to find sum and average of array

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
    
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<sum/n;
    return 0;
}