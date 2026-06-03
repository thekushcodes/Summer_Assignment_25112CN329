// Program to check whether a number is prime

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool prime = true;

    if(n<=1){
        prime = false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if(n%i==0){
            prime = false;
            break;
        }
    }
    if(prime == true) cout<<"The number is prime";
    else cout<<"The number is not prime";

    return 0;
}
