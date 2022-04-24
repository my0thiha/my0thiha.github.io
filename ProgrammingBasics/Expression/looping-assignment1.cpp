#include<iostream>
using namespace std;
int main(){
    
    int num;
    int pos = 0,neg = 0,zero = 0;
    for(int a=1; a<=5; a++){
        cout<<"Enter Any number: ";
        cin>>num;
        if(num>0){
            pos++;
        }
        else if(num<0){
            neg++;
        }
        else if(num==0){
            zero++;
        }
    }
    cout<<"--------------------------";
    cout<<"\nNumber of zero: "<<zero;
    cout<<"\nNumber of positive number: "<<pos;
    cout<<"\nNumber of negative number: "<<neg;
     
}