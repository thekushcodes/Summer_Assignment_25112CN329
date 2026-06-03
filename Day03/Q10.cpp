// Program to print prime numbers in a range

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    if(n>=2) cout<< 2 << " ";

    for(int i = 3; i <= n; i+=2){
        bool prime = true;
        if(i%2==0){
            continue;
        }
        for(int j = 3; j*j <= i; j+=2){
            if(i%j==0){
                prime = false;
                continue;
            }
        }
        if(prime){
            cout<<i<<" ";
        }
    }
    return 0;
}