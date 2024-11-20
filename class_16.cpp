#include<iostream>
using namespace std;

class employee{
       private:
       int a,b,c;

       public:
       int d,e;

       void setdata(int v1 , int v2 , int v3);
       void getdata(){
        
        cout<<"the value of a is : "<<a<<endl;
        cout<<"the value of b is : "<<b<<endl;
        cout<<"the value of c is : "<<c<<endl;
        cout<<"the value of d is : "<<d<<endl;
        cout<<"the value of e is : "<<e<<endl;
       }
};

void employee :: setdata(int v1, int v2, int v3){
           a = v1 ;
           b = v2 ;
           c = v3 ;
};

int main(){
    employee modi;
    modi.d = 6;
    modi.e = 2;
    modi.setdata(4,5,1);
    modi.getdata();
    return 0;
}