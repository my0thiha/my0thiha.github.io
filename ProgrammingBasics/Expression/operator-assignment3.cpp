#include<iostream>
using namespace std;
int main(){
    
    int ogprice,discount;

    cout<<"Enter product price: ";
    cin>>ogprice;

    cout<<"Enter Discount value: ";
    cin>>discount;

    cout<<"After discount,price: "<< ogprice - (ogprice * discount/100) ;
}