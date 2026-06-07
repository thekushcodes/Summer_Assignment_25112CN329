// Program to write function for Fibonacci numbers

#include<iostream>
#include<vector>
using namespace std;

void fibonacci(int n){
    int a = 0, b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 0; i < n-2; i++){
        int nextTerm = a+b;
        cout<<nextTerm<<" ";
        a = b;
        b = nextTerm;
    }
}
int main(){
    int n;
    cin>>n;

    fibonacci(n);
    return 0;
}