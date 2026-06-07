// Program to write function to find maximum

#include<iostream>
using namespace std;
void maximum(int n1, int n2){
    if(n1>n2){
        cout<<n1<<" is greater";
    }
    else{
        cout<<n2<<" is greater";
    }
}

int main(){
    int n1, n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    maximum(n1, n2);

    return 0;
}