#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    int total = 0;
    while (num>0) {
            int x = num%10;
            total = total +  x;
            num=num/10;
    }
    cout<<"The sum of digits of "<<num<<": "<<total;
}