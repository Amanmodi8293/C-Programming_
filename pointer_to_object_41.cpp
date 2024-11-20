#include<iostream>

using namespace std;
class base1{
    int a ;
    int b ;
    public:
    void set_data(int x, int y){
        a = x;
        b = y;
    }

    void get_data(){
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
    }
};
int main(){
    // base1 modi;
    // modi.set_data(4,8);
    // modi.get_data(4,8);

    // base1 *aman = &modi;
    // (*aman).set_data(4,97);
    // (*aman).get_data();

    base1 *aman = new base1;
    aman->set_data(4,97);
    aman->get_data();

    // ARRAY OBJECT
    base1 *aman2 = new base1[4];
    aman2->set_data(4,97);
    aman2->get_data();

    return 0;
}