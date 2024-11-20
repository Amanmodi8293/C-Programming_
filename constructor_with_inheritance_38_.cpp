#include<iostream>
using namespace std;
class base1{
    private:
    int a;
    public:
     base1(int x){
       a = x;
       cout<<"called base1 : "<<endl;
    }
   void print_data(){
    cout<<"The value of a is : "<<a<<endl;
   }
};

class base2{
    private:
    int b;
    public:
     base2(int x){
       b = x;
       cout<<"called base2 : "<<endl;
    }
   void print_data_2(){
    cout<<"The value of a is : "<<b<<endl;
   }
};

class drived : public base1 ,public virtual base2{
    int drived1 , drived2;
    public:

    drived(int a, int b, int c, int d) : base1(a), base2(b)
    {
         drived1 = a;
         drived2 = b;
         cout<<"called drived class"<<endl;
    }

    void print_data_3(){
        cout<<"The value of drived1 is : "<<drived1<<endl;
        cout<<"The value of drived2 is : "<<drived2<<endl;

    }
};
int main(){
    drived modi(3,5,6,7);
    modi.print_data();
    modi.print_data_2();
    modi.print_data_3();
    return 0;
}