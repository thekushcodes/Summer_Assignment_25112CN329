// Program to count digits of a number

#include<iostream>
using namespace std;

int main(){
    int n, digits = 0;
    cin>>n;
    int num = n;

    while(n > 0){
        digits++;
        n /= 10;
    }

    cout<<"Number of digits in "<< num << " is " << digits;
    return 0;
}