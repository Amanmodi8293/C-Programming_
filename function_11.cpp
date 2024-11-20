#include<iostream>

using namespace std;
// int sum(int , int ); Acceptable
int sum(int x, int y);
void g(void);
// void g(); Acceptable
int main(){
    int a,b;
    cout<<"enter the value of a : ";
    cin>>a;
    cout<<"enter the value of b : ";
    cin>>b;
    g();
    cout<<"the sum of a and b is : "<<sum(a,b)<<endl;
    return 0;
}
int sum(int x ,int y){ 
       int z = x + y;
       return z;
}
void g(){
    cout<<"good morning"<<endl;
}