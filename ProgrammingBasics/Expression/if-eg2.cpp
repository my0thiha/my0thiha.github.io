#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter non-zero number: ";
    cin>>num;


    if(num%2){ //if the result is 0 , it doesnt work..Other than 0, it works
        cout<<num<<" is odd number!";
    }
    return 0;
}