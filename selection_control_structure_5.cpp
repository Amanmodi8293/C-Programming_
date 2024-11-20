#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age : "<<endl;
    cin>>age;

    // selection controll structure : If, Else if, Else statement

    // if(age < 18){
    //     cout<<"You can not come to my party "<<endl;
    // }
    // else if(age == 18){
    //     cout<<"You are a kid you will get a kid pass to the party "<<endl;
    // }
    // else{
    //     cout<<"You are come to my party"<<endl;
    // }

    // selection controll structure : switch case statement
    
    switch (age)
    {
      case 18:
      cout<<"You are a kid you will get a kid pass to the party"<<endl;
      break;
      case 22:
      cout<<"You are come to my party"<<endl;
      break;
      case 12:
      cout<<"You can not come to my party"<<endl;
      break;
      default:
      cout<<"No special character"<<endl;
      break;
    }
      cout<<"Done with switch case";
    return 0;
}