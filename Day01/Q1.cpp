// Program to calculate sum of first N natural numbers

#include <iostream>
using namespace std;

int main(){
    int n, sum;
    cin>>n;

    for(int i = 1; i <= n; i++){
        sum += i;
    }

    cout<<"The sum of "<<n<<" natural numbers is "<<sum;

    return 0;
}