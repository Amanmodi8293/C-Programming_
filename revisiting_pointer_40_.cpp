#include<iostream>
using namespace std;

int main(){
    int a = 7;
    int* ptr = &a;

    cout<<"*************SIMPLE POINTER****************"<<endl<<endl;

    cout<<"The value of a is : "<<*(ptr)<<endl;
    cout<<"The adress of a is : "<<ptr<<endl<<endl;

    // NEW KEYWORD

    int *dbr = new int(87);

    cout<<"**************pointer with new keyword for int****************"<<endl<<endl;

    cout<<"The value of a is : "<<*(dbr)<<endl;
    cout<<"The adress of a is : "<<dbr<<endl<<endl;

    float *cbr = new float(87.76);

    cout<<"***************pointer with new keyword for float****************"<<endl<<endl;

    cout<<"The value of a is : "<<*(cbr)<<endl;
    cout<<"The adress of a is : "<<cbr<<endl<<endl;

    int arr2[4];
    int* p = arr2;
    arr2[0] = 2;
    arr2[1] = 3;
    arr2[2] = 4;
    arr2[3] = 5;

    cout<<"*************SIMPLE ARRAY****************"<<endl<<endl;

    cout<<"The value of arr[0] is : "<<arr2[0]<<endl;
    cout<<"The value of arr[1] is : "<<arr2[1]<<endl;
    cout<<"The value of arr[2] is : "<<arr2[2]<<endl;
    cout<<"The value of arr[3] is : "<<arr2[3]<<endl<<endl;

    // NEW KEYWORD

    int *arr = new int[4];
    arr[0] = 5;
    arr[1] = 4;
    *(arr+2) = 3;
    arr[3] = 2;


    cout<<"*************array with new keyword****************"<<endl<<endl;

    delete[] arr;
    cout<<"The value of arr[0] is : "<<arr[0]<<endl;
    cout<<"The value of arr[1] is : "<<arr[1]<<endl;
    cout<<"The value of arr[2] is : "<<arr[2]<<endl;
    cout<<"The value of arr[3] is : "<<arr[3]<<endl<<endl;

    return 0;
}