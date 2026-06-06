// Program to calculate x^n without pow()

#include<iostream>
using namespace std;

int main(){
    int num, power;
    cin>>num>>power;

    int result = 1;
    for(int i = 0; i < power; i++){
        result *= num;
    }

    cout << result;
    return 0;
}