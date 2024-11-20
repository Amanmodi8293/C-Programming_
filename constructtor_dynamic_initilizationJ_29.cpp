#include<iostream>
using namespace std;
class bankdeposit{
    int principal;
    int year;
    float interestrate;
    float returnvalue;
    public:
    bankdeposit(){}
    bankdeposit(int p, int y, float i);
    bankdeposit(int p ,int y, int i);
    void show(void);
};


bankdeposit :: bankdeposit(int p,int y, float i){
    principal = p;
    year = y;
    interestrate = i;
    returnvalue = principal;
    for(int i=0; i<y; i++){
        returnvalue = returnvalue*(1+interestrate);
    }
}

bankdeposit :: bankdeposit(int p,int y, int i){
    principal = p;
    year = y;
    interestrate = float(i)/100;
    returnvalue = principal;
    for(int i=0; i<y; i++){
        returnvalue = returnvalue*(1+interestrate);
    }
}

void bankdeposit :: show(){
           cout<<"principal amount was"<<principal<<endl
           <<"return value after "<<year<<endl
           <<"is"<<returnvalue<<endl;
}
int main(){
    bankdeposit c1, c2, c3;
    int p;
    int y;
    float i;
    int I;
    cout<<"enter the value p y and i"<<endl;
    cin>>p>>y>>i;
    c1 = bankdeposit(p, y,i);
    c1.show();
    cout<<"enter the value p y and i"<<endl;
    cin>>p>>y>>I;
    c2 = bankdeposit(p, y,I);
    c2.show();
    cin>>p>>y>>I;
    return 0;
}