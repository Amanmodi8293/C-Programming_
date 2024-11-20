#include<iostream>

using namespace std;
int main(){
    int i=1;
    // For loop in c++
    cout<<"\n\n*********************In for loop***********************\n";
    for(int i=1; i<=10; i++){

        cout<<i<<endl;
    }

    // while loop in c++
    cout<<"\n*********************In while loop**********************\n";
    int a=1; 
    while(a<=10){
      cout<<a<<endl;
      a++;
    }

    // do while loop in c++
    int b=1;
    cout<<"\n*********************In do while loop********************\n";
    do{
        cout<<b<<endl;
        b++;
    }while(b<=10);
    return 0;
}