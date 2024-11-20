#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // int a = 5;
    // cout<<"the value of a was :"<<a<<endl;
    // a = 45;
    // cout<<"the value of a is : "<<a<<endl;
    // const int a = 5;
    // cout<<"the value of a was :"<<a<<endl;
    // // a = 45;  **You will get an error because a is constant**
    // cout<<"the value of a is : "<<a<<endl;

    // ******Manipulators in c++***********

    // int a=45, b=855,c=6542;
    // cout<<"the value of a is with out setw "<<a<<endl;
    // cout<<"the value of b is with out setw "<<b<<endl;
    // cout<<"the value of c is with out setw "<<c<<endl<<endl;

    // cout<<"the value of a is with out "<<setw(4)<<a<<endl;
    // cout<<"the value of b is with out "<<setw(4)<<b<<endl;
    // cout<<"the value of c is with out "<<setw(4)<<c<<endl;

    //*******************Operater perecedence**********************
    int a=4,b=5;
    int c = ((((5*a)+6)-b)+4);
    cout<<c; 
    return 0;
}