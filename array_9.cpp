#include<iostream>

using namespace std;
int main(){
    int marks[4] = {45,15,25,46};
    int mathmarks[4]; 
    mathmarks[0] = 4444;
    mathmarks[1] = 3333;
    mathmarks[2] = 2222;
    mathmarks[3] = 1111;

    // ********************Marks*********************

    cout<<"\n\nThis is marks => \n";
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // *******************Math marks*****************

    cout<<"\n\nThis is math marks =>\n";
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    
    // Marks print with for loop

    cout<<"\n\nMarks print with for loop=>\n"<<endl;
    for(int i=0; i<4; i++){
        cout<<"the value of "<<i<<" marks is : "<<marks[i]<<endl;
}

    // Pointer to array

int*p = marks;
    cout<<"\n\nPointer to array=>\n"<<endl;
    cout<<"the value of marks[0] is : "<<*p<<endl;
    cout<<"the value of marks[1] is : "<<*(p+1)<<endl;
    cout<<"the value of marks[2] is : "<<*(p+2)<<endl;
    cout<<"the value of marks[3] is : "<<*(p+3)<<endl;

    return 0;

}



