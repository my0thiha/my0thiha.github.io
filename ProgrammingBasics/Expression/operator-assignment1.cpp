#include<iostream>
using namespace std;
int main(){

    int amount,rate,month;

    cout<<"Enter Loan Amount: ";
    cin>>amount;

    cout<<"Enter Rate: ";
    cin>>rate;

    cout<<"Enter number of month: ";
    cin>>month;

    int interest = amount*rate/100;

    cout<<"Monthly interest: "<< interest;
    cout<<"\nYour interest is: "<< month * interest;

}
