#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y){
   COORD coord;
   coord.X= x;
   coord.Y= y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}

class employee{
    private:
    int id;
    static int count;

    public:
    void setdata(void);
    void inputdata(void);
    void getdata(void);
   static void getcount(void);

};

int employee :: count; 

void employee :: setdata(){
    cout<<"** Enter the id : "<<endl;

}

void employee :: inputdata(){
    cin>>id;
    count++;
}

void employee :: getdata(){
    cout<<"The id of this employee is : "<<id<<"And this is employee number : "<<count;
}

 void employee :: getcount(){
    cout<<"the value of count is : "<<count<<endl;
}
int main(){
    system("cls");
    employee aman, raj, varun, dipanshu, reetesh, sandeep;
   
    gotoxy(25,0);
    cout<<"************************ THE IS MY PROGRAM *************************";
    gotoxy(50,2);
    aman.setdata();
    gotoxy(50,3);
    aman.inputdata();
    gotoxy(50,4);
    aman.getdata();
    gotoxy(50,5);
    aman.getcount();

    gotoxy(50,6);
    raj.setdata();
    gotoxy(50,7);
    raj.inputdata();
    gotoxy(50,8);
    raj.getdata();
    gotoxy(50,9);
    aman.getcount();

    gotoxy(50,10);
    varun.setdata();
    gotoxy(50,11);
    varun.inputdata();
    gotoxy(50,12);
    varun.getdata();
    gotoxy(50,13);
    aman.getcount();

    gotoxy(50,14);
    dipanshu.setdata();
    gotoxy(50,15);
    dipanshu.inputdata();
    gotoxy(50,16);
    dipanshu.getdata();
    gotoxy(50,17);
    aman.getcount();

    gotoxy(50,18);
    reetesh.setdata();
    gotoxy(50,19);
    reetesh.inputdata();
    gotoxy(50,20);
    reetesh.getdata();
    gotoxy(50,21);
    aman.getcount();

    gotoxy(50,22);
    sandeep.setdata();
    gotoxy(50,23);
    sandeep.inputdata();
    gotoxy(50,24);
    sandeep.getdata();
    gotoxy(50,25);
    aman.getcount();

    return 0;
}