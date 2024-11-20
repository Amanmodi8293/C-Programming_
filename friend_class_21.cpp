#include<iostream>
using namespace std;

class complex;
class calculatar
{
public:
int sum(int a, int b){
    return a + b;
}

int sumrealcomplex(complex , complex );
int sumcompcomplex(complex , complex );

};

class complex
{
private:
    int a,b;
public:
void setnumber(int v1, int v2){
        a = v1;
        b = v2;
}

friend int calculatar :: sumrealcomplex(complex o1,complex o2);
friend int calculatar :: sumcompcomplex(complex o1,complex o2);

void printnumber(){
    cout<<"The complex number is : "<<a<<" + "<<b<<"i"<<endl;
}

};



int calculatar :: sumrealcomplex(complex o1, complex o2){
             return (o1.a + o2.a);
}
int calculatar :: sumcompcomplex(complex o1, complex o2){
             return (o1.b + o2.b);
}



int main(){
    complex c1, c2;
    c1.setnumber(1,7);
    c1.printnumber();
    c2.setnumber(4,3);
    c2.printnumber();
    calculatar cal;
    int modi = cal.sumrealcomplex(c1,c2);
    cout<<"the sum of real part of c1 and c2 is : "<<modi<<endl;
    int aman = cal.sumcompcomplex(c1,c2);
    cout<<"the sum of comp part of c1 and c2 is : "<<aman<<endl;
    return 0;
}