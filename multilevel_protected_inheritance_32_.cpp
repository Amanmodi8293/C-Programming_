#include<iostream>
using namespace std;
class student
{
protected:
int roll_number;
    
public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student :: set_roll_number(int a)
{
    roll_number = a;
}

void student :: get_roll_number()
{
    cout<<"your roll_number is : "<<roll_number<<endl;
};

class exam : public student
{
protected:
int math;
int physics;
    
public:
    void set_marks(int, int);
    void get_marks(void);
};

void exam :: set_marks(int b, int c)
{
    math = b;
    physics = c;
}

void exam :: get_marks()
{
    cout<<"your math marks is : "<<math<<endl;
    cout<<"your physics marks is : "<<physics<<endl;
};

class result : public exam
{
protected:
float percentage;    
public:
    void display(void);
};

void result:: display()
{
    get_roll_number();
    get_marks();
    cout<<"your result is : "<<(math+physics)/2<<"%"<<endl;
};

int main(){
    result aman;
    aman.set_roll_number(274);
    aman.set_marks(80,60);
    aman.display();
    return 0;
}