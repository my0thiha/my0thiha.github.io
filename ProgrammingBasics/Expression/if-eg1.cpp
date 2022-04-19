#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number: ";
    cin>>num;

    if(num>0 && num <=9){
        cout<<"You entered one digit!";
    }
    return 0;
}