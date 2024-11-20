#include<iostream>
#include<math.h>
using namespace std;
class simple_calculator{
    protected:
    double a ;
    double b ;
    public:
    void set_value(double x, double y){
        a = x;
        b = y;
    }

    void show(){
        cout<<"the sum of a and b is : "<<a+b<<endl;
        cout<<"the subtraction of a and b is : "<<a-b<<endl;
        cout<<"the mutiplication of a and b is : "<<a*b<<endl;
        cout<<"the division of a and b is : "<<a/b<<endl;
    }

};

class sientific_calculator{
    protected:
    int c;
    int d;
    public:

    void set_value2(int o, int p){
        c = o;
        d = p;
    }

    void show2(){
        cout<<"The value of a and b is : "<<sin(c)*sin(c) + cos(c)*cos(c)<<endl; 
        cout<<"The value of a and b is : "<<sin(d) + cos(d)<<endl;
    }

};

class hybrid_calculator : public simple_calculator , public sientific_calculator{
    public:
    void display(){
        show();
        show2();
    }

};
int main(){
    hybrid_calculator modi;
    modi.set_value(2,3);
    modi.set_value2(7,2);
    modi.display();
    return 0;
}