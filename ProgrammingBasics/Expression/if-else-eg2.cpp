#include<iostream>
using namespace std;
int main() {
    int mark;
    
    cout<<"Enter Your Mark : ";
    cin>>mark;

    if (mark<50){
        cout<<"Fail Exam";
    }
    else{
        cout<<"Pass Exam";
    }
    return 0;
}