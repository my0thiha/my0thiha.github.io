#include<iostream>
using namespace std;
int main(){ 
    int num;

    cout<<"Enter a number";
    cin>>num;


    if(num%5 == 0 && num%3 == 0){
        cout<<num<<" is divisible with both 3 & 5";
    }

    if(num%5 == 0){
        cout<<" is divisible with only 5";
    }

    else if (num%3 == 0 ){
        cout<<num<<" is divisible with only 3";
    }

    else {
        cout<<" is not divisible with both 3 & 5";
    }
    return 0;
}