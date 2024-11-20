#include<iostream>
using namespace std;
int count = 0;
class num{
    public:
    num(){
        count--;
        cout<<"This is constructor "<<count<<endl;
    }
    ~num(){
        cout<<"This is constructor "<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"I am aman "<<endl;
    cout<<"creating one object"<<endl;
    num n1;
    {
        cout<<"entering this block"<<endl;
        cout<<"creating two more object";
        num n2 , n3;
        cout<<"exsiting this block"<<endl;
    }
        cout<<"back to main"<<endl;
    return 0;
}