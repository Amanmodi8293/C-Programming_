#include<iostream>
using namespace std;

class complex{
    int a,b;
    public: 
    void setdata(int v1, int v2){
        a = v1;
        b = v2;
    }
    friend complex sumcomplex(complex o1,complex o2);
    void  printdata(){
        cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
  }
};
    complex sumcomplex(complex o1, complex o2){
        complex o3;
        o3.setdata((o1.a + o2.a), (o1.b + o2.b));
        return o3;
    }
int main(){
    complex c1,c2,sum;
    c1.setdata(4,5);
    c1.printdata();

    c2.setdata(6,8);
    c2.printdata();

    sum = sumcomplex(c1,c2);
    sum.printdata();
    return 0;
}