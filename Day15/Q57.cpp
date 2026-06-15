// Program to reverse array

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout<<"Enter element "<<i+1<<": "<<endl;
        cin>>arr[i];
    }

    int res[n];
    cout<<"Reversed array: "<<endl;
    for(int i = 0; i < n; i++){
        res[i] = arr[n-i-1];
        cout<<res[i]<<" ";
    }
    
    return 0;

}