// Program to count even and odd elements

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

    int odd = 0, even = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0) even+=1;
        else odd+=1;
    }
    cout<<"Odd elements: "<<odd<<endl;
    cout<<"Even elements: "<<even<<endl;
    return 0;
}