#include<iostream>
using namespace std;

class  y;
class x{
    int data;
    public:
       void setdata(int a){
           data = a;
       }
       void display(){
        cout<<data<<endl;
       }
       friend void add(x,y);
};

class y{
    int num;
    public:
       void setdata(int b){
           num = b;
       }
       void display(){
        cout<<num<<endl;
       }
       friend void add(x,y);
};
   void add(x a1 ,y a2){
    cout<<"the sum of o1 and o2 is : "<<a1.data + a2.num<<endl;
   }
int main(){
    x o1;
    o1.setdata(45);
    o1.display();
    y o2;
    o2.setdata(65);
    o2.display();
    add(o1,o2);
    return 0;
}