#include<iostream>
using namespace std;

int a=10; //global var
void display(){
    int a=20; //local var
    cout<<"\nValue of a inside function: "<<a<<"\n";
}

void displayAnother(int a){ //parameter (local scope) int a = 100
    cout<<"Value of a inside fun parameter: "<<a<<"\n";
}
int main(){
    cout<<"\nValue of a: "<<a;
    display();
    displayAnother(100);
    return 0;
}