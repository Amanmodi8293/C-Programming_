#include<iostream>
using namespace std;

class shop{
    private :

    int itemid[100];
    int itemprice[100];
    int counter;

    public :

    void initcounter(void){counter = 0;}
    void setprice(void);
    void displayprice(void);
};

void shop :: setprice(){
    cout<<"enter id of your item no "<<counter+1 <<" : "<<endl;
    cin>>itemid[counter];
    cout<<"enter price of your itemid : "<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop :: displayprice(){
    for(int i=0; i<counter; i++){
        cout<<"The price of item with id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
}
int main(){
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();

    return 0;
}