#include<iostream>
using namespace std;

class employee{
    private: 
    int id;
    int salary;
    static int count;

    public: 
    void setdata(void);
    void getdata(void);
};
 
  int employee :: count;

void employee :: setdata(){
    cout<<"Enter the "<<count+1<<" employee id : "<<endl;
    cin>>id;
    cout<<"Enter the salary of "<<count+1<<" employee is "<<endl;
    cin>>salary;
    count++;
}

void employee :: getdata(){
    cout<<"\nThe "<<count<<" employee id is "<<id<<endl;
    cout<<"The salary of "<<count<<" employee is "<<salary<<endl<<endl;
}

int main(){
    // employee aman;
    // aman.setdata();
    // aman.getdata();
    employee employee[100];
    for(int i=0; i<10; i++){
         employee[i].setdata();
         employee[i].getdata();

    }
    return 0;
}