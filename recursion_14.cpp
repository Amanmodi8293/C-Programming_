#include<iostream>

using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}
int main (){
    int a;
    int b;
    cout<<"Enter the value of a is : ";
    cin>>a;
    cout<<"The factorial "<<a<<" is : "<<factorial(a)<<endl;
    cout<<"Enter the value of b is : ";
    cin>>b;
    cout<<"The term in fibonacci sequence at position "<<b<<" is : "<<fib(b)<<endl;
    return 0;
}