// Program to write function to check prime

#include<iostream>
using namespace std;
void prime(int n){
    bool isPrime = true;
    for(int i = 2; i <= n/2; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime) cout<<n<<" is a prime number";
    else cout<<n<<" is not a prime number";    
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    prime(n);

    return 0;
}