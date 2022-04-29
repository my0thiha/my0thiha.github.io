#include<iostream>
using namespace std;
int main(){
    int price,quantity;
    cout<<"Enter item price: ";
    cin>>price;
    cout<<"Enter item quantity: ";
    cin>>quantity;

    int total = price * quantity;
    if(total>=5000){
        int disc;
        disc=total-(total*0.1);
        cout<<"Total Expenses: "<<disc;
    }
    else{
        cout<<"Total Expenses: "<<price*quantity;
    }
}