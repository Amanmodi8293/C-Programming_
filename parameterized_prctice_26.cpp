#include<iostream>
using namespace std;

class point{
    int a,b;
    public:
    point(int , int);
    void printdata(){
        cout<<"your complex number is : "<<"("<<a<<"+"<<b<<"i)"<<endl;
    }
};

point :: point(int x , int y){
    a = x;
    b = y;
}
int main(){
     point a(5,6);
     a.printdata();

     point b(4,8);
     b.printdata();
     
    return 0;
}