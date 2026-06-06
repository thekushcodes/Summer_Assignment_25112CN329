// Program to check Strong number

#include<iostream>
using namespace std;

int factorial(int num){
    int ans = 1;
    for(int i = 1; i <= num; i++){
        ans *= i;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int num = n;

    int result = 0;
    while(n > 0){
        int lastDigit = n%10;
        int digitFactorial = factorial(lastDigit);
        result += digitFactorial;
        n /= 10;
    }
    if(num == result){
        cout<<"It is a Strong number";
    }
    else{
        cout<<"It is not a Strong number";
    }
    return 0;
}