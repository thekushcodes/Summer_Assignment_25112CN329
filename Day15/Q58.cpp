// Program to rotate array left

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cout<<"Enter element "<<i+1<<": "<<endl;
        cin>>arr[i];
    }

    cout<<"Enter number of rotations: ";
    int rotateNum;
    cin>>rotateNum;
    
    reverse(arr.begin(), arr.begin()+rotateNum);
    reverse(arr.begin()+rotateNum, arr.end());
    reverse(arr.begin(), arr.end());
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}