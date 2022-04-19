#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;

    cout<<"Enter Number (1): ";
    cin>>num1;
    cout<<"Enter Number (2): ";
    cin>>num2;
    cout<<"Enter Number (3): ";
    cin>>num3;

    int max_num = num1;

    if(max_num<num2){
        max_num=num2;
    }

    if(max_num<num3){
        max_num=num3;
    }

    cout<<"Maximum number is "<<max_num;
}