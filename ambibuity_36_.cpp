#include<iostream>
using namespace std;
class base1{
    public:
    void say(){
        cout<<"good morning"<<endl;
    }
};

// class base2{
//     public:
//     void say(){
//         cout<<"good afternoon"<<endl;
//     }
// };

class drived : public base1{
    public:
    // void say(){
    //     cout<<"good night"<<endl;
    // }
};
int main(){
    // base1 a;
    // a.say();
    // base2 b;
    // b.say();
    drived c;
    c.say();
    return 0;
}