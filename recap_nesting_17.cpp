#include<iostream>

using namespace std;
class binary{
    string s;
    public :
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
    void display_2(void);
    
};

void binary :: read(){
    cout<<"Enter the binary number : ";
    cin>>s;
} 

void binary :: chk_bin(){
    for(int i=0; i<s.length(); i++){
         if(s.at(i)!='0' && s.at(i)!='1' ){
            cout<<"incorrect binary number";
            exit(0);
         }
    }
}
void binary :: ones_compliment(){
    for(int i=0; i<s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        
        else{
            s.at(i)='0';
        }
    }
}
void binary :: display(){
    cout<<"display your binary number"<<endl;
    for(int i=0; i<s.length(); i++){
        cout<<s.at(i);           
        }
    }
void binary :: display_2(){
    cout<<"\ndisplay your ones compilement binary number"<<endl;
    for(int i=0; i<s.length(); i++){
        cout<<s.at(i);           
        }
    }

int main(){
    binary a;
    a.read();
    a.chk_bin();
    a.display();
    a.ones_compliment();
    a.display_2();
    return 0;
}