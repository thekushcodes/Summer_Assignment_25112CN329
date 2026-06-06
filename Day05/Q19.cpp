// Program to print factors of a number

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cout<<i<<" ";
        }
    }

    // Time efficient but factors will be unsorted. Sorting needs O(n * log n)
    // for(int i = 1; i*i <= n; i++){
    //     if(n%i == 0){
    //         cout<<i<<" ";
    //         if(n/i != i){
    //             cout<<n/i<<" ";
    //         }
    //     }
    // }
    return 0;
}