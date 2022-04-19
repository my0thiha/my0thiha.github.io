#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a non-zero number: ";
    cin>>num;

    if(num%2 == 0){
        cout<<num<<" is Even number";
    }
    else {
        cout<<num<<" is Odd number";
    }
    return 0;
}