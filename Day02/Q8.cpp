// Program to check whether a number is palindrome

#include<iostream>
using namespace std;

int main(){
    int n, reverse = 0;
    cin>>n;
    int num = n;
    
    while(n > 0){
        int lastDigit = n%10;
        reverse = reverse*10 + lastDigit;
        n /= 10;
    }

    if(num==reverse) cout<<"The number is palindrome";
    else cout<<"The number is not a plaindrome";

    return 0;
}