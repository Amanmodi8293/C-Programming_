#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    void printdata(){
        cout <<"Your number is "  <<a  <<" + "  <<b  <<"i"  <<endl;
    }
   complex(void);
};

complex :: complex(void){
    a = 10;
    b = 32;
}

int main(){
    complex a;
    a.printdata();
    return 0;
}