// Program to merge two arrays

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n1, n2;
    cout<<"Enter the size of both arrays: ";
    cin>>n1>>n2;
    vector<int> arr1(n1), arr2(n2);

    cout<<"Enter elements of arr1"<<endl;
    for(int i = 0; i < n1; i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements of arr2"<<endl;
    for(int i = 0; i < n2; i++){
        cin>>arr2[i];
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    vector<int> result;
    int x = 0, y = 0;
    while(x < n1 && y < n2){
        if(arr1[x] <= arr2[y]){
            result.push_back(arr1[x++]);
        }
        else{
            result.push_back(arr2[y++]);
        }
    }
        while(x < n1){
            result.push_back(arr1[x++]);
        }
        while(y < n2){
            result.push_back(arr2[y++]);
        }

        cout<<"Merged array: "<<endl;
        for(int i = 0; i < n1+n2; i++){
            cout<<result[i]<<" ";
        }

        return 0;
}