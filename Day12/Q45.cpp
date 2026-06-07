// Program to write function for palindrome

#include<iostream>
using namespace std;

bool palindrome(int n){
    int num = n;
    int reverse = 0;
    while(n > 0){
        int lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        n /= 10;
    }
    if(reverse == num) return true;
    return false;
}
int main(){
    int n;
    cin>>n;

    if(palindrome(n)) cout<<"It is palindrome";
    else cout<<"It is not palindrome";

    return 0;
}