#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:

    complex(int x, int y);

    void printdata(){
        cout<<"Your complex number is : "<<a<<"+"<<b<<"i"<<endl;
    }
};
 complex :: complex(int x, int y){
         a = x ;
         b = y;
 }
int main(){
    // implicit call 
    complex a(4,5);
    a.printdata();
    // Explicit call
    complex b = complex(44,55);
    b.printdata(); 
    return 0;
}