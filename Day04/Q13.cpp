// Program to generate Fibonacci series

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a = 0, b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 0; i < n; i++){
        int nextTerm = a+b;
        cout<<nextTerm<<" ";

        a = b;
        b = nextTerm;
    }

    return 0;
}