// Program to find duplicates in an array

#include<iostream>
#include<unordered_set>
#include<vector>
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

    unordered_set<int> seen;
    unordered_set<int> duplicates;
    for(int num : arr){
        if(seen.count(num) > 0){
            duplicates.insert(num);
        }
        else{
            seen.insert(num);
        }
    }

    vector<int> duplicateVec(duplicates.begin(), duplicates.end());
    cout<<"Duplicates: ";
    for(int i : duplicateVec){
        cout<<i<<" ";
    }
    return 0;
}