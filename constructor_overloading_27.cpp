#include<iostream>
using namespace std;
class complex {
  int a,b;
  public:
  complex(void);
  complex(int); 
  complex(int , int);
  void printdata(){
    cout<<"your complex number is : "<<a<<"+"<<b<<"i"<<endl;
  }
};

complex :: complex(){
    a = 0;
    b = 0;
}

complex :: complex(int x){
     a = x;
     b = 0;
}

complex :: complex(int x , int y){
    a = x; 
    b = y;
}
int main(){
    complex c1;
    c1.printdata();
    complex c2(5);
    c2.printdata();
    complex c3(5,6);
    c3.printdata();
    return 0;
}