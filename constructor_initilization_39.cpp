#include<iostream>
using namespace std;
class Base {
    int a;
    int b;
    public:
    // Base(int x , int y) : a(x), b(y)
    // Base(int x , int y) : a(x), b(y+8)
    // Base(int x , int y) : a(x), b(y+a)
    // Base(int x , int y) : a(x), b(2*y)
    // Base(int x , int y) : a(x), b(y+a)
    // Base(int x , int y) : b(y) ,a(x)
    // Base(int x , int y) : b(y+a) ,a(x)
    // Base(int x , int y) : b(y) ,a(x+y)
    Base(int x , int y) : b(y) ,a(x+b)
    {
        cout<<"This is constructor " <<endl;
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
    }
};
int main(){
    Base modi(4,6);
    return 0;
}