#include<iostream>
using namespace std;
int main(){

    int mark[5];
    //userinput
    cout<<"Enter mark 1: ";
    cin>>mark[0];
    cout<<"Enter mark 2: ";
    cin>>mark[1];
    cout<<"Enter mark 3: ";
    cin>>mark[2];
    cout<<"Enter mark 4: ";
    cin>>mark[3];
    cout<<"Enter mark 5: ";
    cin>>mark[4];

    //display
    cout<<"\n______All Mark______\n";
    cout<<mark[0]<<"\n";
    cout<<mark[1]<<"\n";
    cout<<mark[2]<<"\n";
    cout<<mark[3]<<"\n";
    cout<<mark[4]<<"\n";
    return 0;
}