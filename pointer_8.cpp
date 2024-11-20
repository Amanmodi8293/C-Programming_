#include<iostream>

using namespace std;
int main(){
    int a =5;
    int*b ;
    b = &a;

    // & -----> Adress of operatar

    cout<<"the adress of a is : "<<&a<<endl;
    cout<<"the adress of a is : "<<b<<endl;

    // * -----> Dereference of operatar

    cout<<"the value of a is : "<<a<<endl;
    cout<<"the value of a is : "<<*b<<endl;

    // Pointer to pointer
    int**c =&b;
    cout<<"the adress of b is : "<<&b<<endl;
    cout<<"the adress of b is : "<<c<<endl;
    cout<<"the value of b and the adress of a is : "<<*c<<endl;
    cout<<"the value of a is : "<<**c<<endl;


    return 0;
}