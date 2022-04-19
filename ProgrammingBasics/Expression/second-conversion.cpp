#include<iostream>
using namespace std;
int main (){
    int inputSec;
    cout<<"Enter Total Second: ";
    cin>>inputSec;

    cout<<"Hour(s): "<<(inputSec/3600);
    cout<<"\nMinute(s): "<<(inputSec%3600)/60;
    cout<<"\nSecond(s): "<<(inputSec%3600)%60;
}