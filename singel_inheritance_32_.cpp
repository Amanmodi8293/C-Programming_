#include<iostream>
using namespace std;
class base{
    int Data1;
    public:
    int Data2;
    void setdata();
    int getdata1();
    int getdata2();
};

    void base :: setdata(){
        Data1 = 10;
        Data2 = 20;
    }

    int base :: getdata1(){
        return Data1;
    }

    int base :: getdata2(){
        return Data2;
    }

class drived : public base{
      int Data3;
      public:
      void process();
      void display();
};

void drived :: process(){
    setdata();
    Data3 = Data2 * getdata1();
}

void drived :: display(){
    cout<<"The value of data1 is "<<getdata1()<<endl;
    cout<<"The value of data2 is "<<Data2<<endl;
    cout<<"The value of data3 is "<<Data3<<endl;
}
int main(){
    drived a;
    a.setdata();
    a.process();
    a.display();
    return 0;
}