#include<iostream>

using namespace std;

// ****************************structure*****************************

// typedef struct emplooye{
//      int code;
//      float salary;
//      char name;
// }p;

// ****************************union**********************************

// union money{
//     int rupees;
//     float doller;
//     char note;
// };
    
int main(){

// ****************************structure*****************************

    // p aman;
    // p modi;
    // aman.code = 100;
    // aman.salary = 100.11;
    // aman.name = 'd';
    // cout<<"This is my code : "<<aman.code<<endl;
    // cout<<"This is my salary : "<<aman.salary<<endl;
    // cout<<"This is my name : "<<aman.name<<endl;
    
    // modi.code = 200;
    // modi.salary = 211.11;
    // modi.name = 'k';
    // cout<<"This is my code : "<<modi.code<<endl;
    // cout<<"This is my salary : "<<modi.salary<<endl;
    // cout<<"This is my name : "<<modi.name<<endl;
    
// ****************************union**********************************

    // union money aman;
    // aman.doller = 5.2;
    // aman.rupees = 100;
    // aman.note = 's';
    // cout<<"my currency is doller : "<<aman.doller<<endl;
    // cout<<"my currency is rupees : "<<aman.rupees<<endl;
    // cout<<"my currency is note : "<<aman.note<<endl;

    // *********************************Enum**************************************
    
    enum aman{cycle,bike,car};
    aman m = cycle;
    aman n = bike;
    aman o = car;
    cout<<m<<endl;
    cout<<n<<endl;
    cout<<o<<endl;
    cout<<(o==2)<<endl;

    return 0;
}