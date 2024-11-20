#include<iostream>
using namespace std; 
class number{
    int a;
    public:
    number(){
        a = 0;
    }
    number(int num){
        a = num;
    }
    void show(){
        cout<<"The number is : "<<a<<endl;
    }

    number(number &b){
        a = b.a;
    }
};
int main(){
    number  x(854), y(65), z(54);
    x.show();
    y.show();
    z.show();
    number z1(x),z2(y),z3(z);
    x.show();
    y.show();
    z.show();
    number z4 = x;
    z4.show();
    return 0;
}