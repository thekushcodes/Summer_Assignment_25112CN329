// Program to find factorial of a number

#include<iostream>
using namespace std;

int main(){
    int n, factorial = 1;
    cin>>n;
    int num = n;

    while(n > 0){
        factorial *= n;
        n--;
    }
    cout<<"The factorial of "<<num<<" is "<<factorial;

    return 0;
}