#include<iostream>
using namespace std;
int main(){
    int price,quantity;
    cout<<"Enter item price: ";
    cin>>price;
    cout<<"Enter item quantity: ";
    cin>>quantity;

    if(price>5000){
        int disc;
        disc=price-(price*0.1);
        cout<<"Total Expenses: ";
    }
    else{
        cout<<"Total Expenses: "<<price*quantity;
    }
}