#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter non-zero number: ";
    cin>>num;

    if(num>0){
        cout<<"The number is Positive";
    }
    else if(num<0){
        cout<<"The number is Negative";
    }
}