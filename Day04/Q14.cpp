// Program to find nth term in Fibonacci series

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n==1){
        cout<<0;
        return 0;
    }
    if(n==2){
        cout<<1;
        return 0;
    }
    
    int result;
    
    int a = 0, b = 1;
    for(int i = 0; i < n; i++){
        int nextTerm = a+b;
        
        if(i == n-1){
            result = nextTerm;
        }
        
        a = b;
        b = nextTerm;
    }
    
    cout<<result;
    
    return 0;
}