#include<iostream>
using namespace std;
class simple{
   int data1;
   int data2;
   int data3;
   public: 
   simple(int a, int b=6, int c=8){
        data1 = a; 
        data2 = b;
        data3 = c;
   }
   void printdata(void);
};

void simple :: printdata(){
    cout<<"The value of data1 , data2 and data3 is : "<<data1<<" , "<<data2<<" and "<<data3<<endl;
}

int main(){
    simple s(5,4,6);
    s.printdata();
    return 0;
}