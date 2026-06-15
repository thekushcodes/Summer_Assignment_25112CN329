// Program to move zeros to the end

#include<iostream>
#include<vector>
using namespace std;

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cout<<"Enter element "<<i+1<<": "<<endl;
        cin>>arr[i];
    }

    int j = 0; // Position for next non-zero element
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}