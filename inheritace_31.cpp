#include<iostream>
using namespace std;
class employee{
    public:
    int id;
    float salary;
    employee(){}
    employee(int inpid){
        id = inpid;
        salary = 32.12;
    }
};

class programer : public employee{
    public:
    int languagecode;
    programer(int inpid){
        id = inpid;
        languagecode = 4544;
    }
    void show(){
        cout<<id<<endl;
    }
};
int main(){
    employee a(4),b(9);
    cout<<a.salary<<endl;
    cout<<b.salary<<endl;
    programer x(8),y(9);
    x.show();
    y.show();
    cout<<x.languagecode<<endl;
    cout<<x.id<<endl;
    return 0;
}