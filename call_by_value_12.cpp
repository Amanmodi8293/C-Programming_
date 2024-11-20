#include<iostream>

using namespace std;
// void swap(int x, int y);
// void swappointer(int* x, int* y);
// void swapreference(int &x, int &y);
int & swapdereference(int &x, int &y);

int main(){
    int a = 3;
    int b = 6;
    cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
    // swap(a,b);
    // cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
    // swappointer(&a,&b);
    // cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
    // swapreference(a,b);
    // cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
    swapdereference(a,b) = 345;
    cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}

// ***************************Call by value*******************************

// void swap(int x, int y){
//     int temp = x;
//            x = y;
//            y = temp;
// }

// ***************************Call reference by pointer**********************

// void swappointer(int* x, int* y){
//     int  temp = *x;
//            *x = *y;
//            *y = temp;
// }

// ***************************Call by reference*******************************

// void swapreference(int &x, int &y){
//     int temp = x;
//            x = y;
//            y = temp;
// }

int & swapdereference(int &x, int &y){
    int temp = x;
           x = y;
           y = temp;
           return x;
}