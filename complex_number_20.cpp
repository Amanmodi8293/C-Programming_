#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
     void setdata(int v1, int v2);
    //  {
    //     a = v1;
    //     b = v2;
    // }
    void Bysumdata(complex o1, complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printdata(void){
    cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
    } 
};
void complex:: setdata(int v1,int v2)
{
    a=v1;
    b=v2;
};

int main(){
    complex c1,c2,c3;
    c1.setdata(4,5);
    c1.printdata();
    c2.setdata(6,7);
    c2.printdata();
    c3.Bysumdata(c1,c2);
    c3.printdata();
    
    return 0;
}