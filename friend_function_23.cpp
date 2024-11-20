#include<iostream>
#include<windows.h>
using namespace std;

class  y;
class x{
    int data;
    public:
    friend void exchange(x &, y &);
       void setdata(int a){
           data = a;
       }
       void display(){
        cout<<"the value of o1 is : "<<data<<endl;
       }
       friend void add(x,y);
};

class y{
    int num;
    public:
    friend void exchange(x &, y &);
       void setdata(int b){
           num = b;
       }
       void display(){
        cout<<"the value of o2 is : "<<num<<endl;
       }
       friend void add(x,y);
};
   void add(x a1 ,y a2){
    cout<<"the sum of o1 and o2 is : "<<a1.data + a2.num<<endl;
   }
   void exchange(x & v, y & z){
             int temp = v.data;
             v.data = z.num;
             z.num = temp;
   }
int main(){
    system("cls");
    x o1;
    o1.setdata(45);
    o1.display();
    y o2;
    o2.setdata(65);
    o2.display();
    add(o1,o2);
    exchange(o1,o2);
    cout<<"The value of after o1 exchanging becomes : ";
    o1.display();
    cout<<"The value of after o2 exchanging becomes : ";
    o2.display();
    return 0;
}