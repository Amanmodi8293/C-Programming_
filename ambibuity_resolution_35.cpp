#include<iostream>
using namespace std;
class Base1{
    public:
        void greet(){
            cout<<"hello world"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"hello people of world"<<endl;
        }
};

class drived : public Base1 , public Base2{
    int  a = 45;
    public:
    void greet(){
       Base1 :: greet();
    }
};
int main(){
    // Base1 a;
    // a.greet();
    // Base2 b;
    // b.greet();
    drived modi;
    modi.greet();
    return 0;
}