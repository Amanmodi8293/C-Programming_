#include<iostream>
using namespace std;
class student{
    protected:
    int roll_number;
    public:

    void set_number(int a){
        roll_number = a;
    }

    void print_number(){
        cout<<"Your roll number is : "<<roll_number<<endl;
    }
};

class test : virtual public student{
    protected:
    float math_marks;
    float physics_marks;
    public:

    void set_marks(float b, float c){
        math_marks = b;
        physics_marks =c;
    }

    void print_marks(){
        cout<<"Your result is here "<<endl
        <<"math :"<<math_marks<<endl
        <<"physics :"<<physics_marks<<endl;
    }
};
class sports : virtual public student{
       protected:
       float score;
       public:
       void set_score(float d){
            score =d;
       }

       void print_score(){
        cout<<"Your score is : "<<score<<endl;
       }
};

class result : public test, public sports{
         private:
         float total;
         public:

         void display(){
            total = math_marks + physics_marks + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is : "<<total<<endl; 
         }
};
int main(){
    result modi;
    modi.set_number(111);
    modi.set_marks(80.23,90.43);
    modi.set_score(9);
    modi.display();
    return 0;
}