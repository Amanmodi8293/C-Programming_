#include<iostream>

using namespace std;

int sum(int a, int b){
    cout<<"\nfunction with 2 argument"<<endl;
    return a + b;
}

int sum(int a, int b, int c){
    cout<<"function with 3 argument"<<endl;
    return a + b *c;
}
int volume(int a , int b){
    cout<<"function with 3 argument"<<endl;
    return (3.14*a*a*b);
}
int volume(int l, int b, int h){
    cout<<"function with 3 argument"<<endl;
    return (l*b*h);
}
int volume(int a){
    cout<<"function with 1 argument"<<endl;
    return (a*a*a);
}

int main(){
    cout<<"The value of 5 and 8 is : "<<sum(5,8)<<endl<<endl;
    cout<<"The value of 5, 6 and 8 is : "<<sum(5,6,8)<<endl<<endl;
    cout<<"The volume of cylinder radius 6 and hieght 9 is : "<<volume(6,9)<<endl<<endl;
    cout<<"The volume of cuboid length 6 and breadth 9 and hieght 5 is : "<<volume(6,9,5)<<endl<<endl;
    cout<<"The volume of cube side 5 and side 8 and side 5 is : "<<volume(5,8,5)<<endl<<endl;

    return 0;
}