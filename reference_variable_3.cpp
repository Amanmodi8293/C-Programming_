#include<iostream>
using namespace std;
int c = 55; //**global variable**
int main(){
    // *************Build in data type********************

    // int a,b,c;
    // cout<<"enter the value of a"<<endl;
    // cin>>a;
    // cout<<"enter the value of b"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"the sum of a and b is : \n" <<c<<endl;
    // cout<<"the value of global c is : \n"<<::c;

    /*********************************************************************************/

    // **************Float , double  and  long double literals*******************

    // float d = 2.3f;
    // long double e = 2.3l;
    // cout<<"the value of d is : "<<d<<endl;
    // cout<<"the value of e is : "<<e<<endl;
    // cout<<"the size of 2.3 is :"<<sizeof(2.3)<<endl;
    // cout<<"the size of 2.3f is :"<<sizeof(2.3f)<<endl;
    // cout<<"the size of 2.3F is :"<<sizeof(2.3F)<<endl;
    // cout<<"the size of 2.3l is :"<<sizeof(2.3l)<<endl;
    // cout<<"the size of 2.3L is :"<<sizeof(2.3L)<<endl;

    // ***************Reference variable******************
    // int x = 411;
    // int &y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    //  *****************Typecasting*******************
    int a = 42;
    float b = 42.22;
    cout<<"the value of a is "<<(float)a<<endl;
    cout<<"the value of a is "<<float(a)<<endl;

    cout<<"the value of a is "<<(int)b<<endl;
    cout<<"the value of a is "<<int(b)<<endl;

    cout<<"the expression is : "<<a + b<<endl;
    cout<<"the expression is : "<<a + int(a)<<endl;
    cout<<"the expression is : "<<a + (int)a<<endl;

    return 0;
}