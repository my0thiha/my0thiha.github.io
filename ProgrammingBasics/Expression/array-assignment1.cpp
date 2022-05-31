#include<iostream>
using namespace std;
int main(){

    int array[5];
    cout<<"Enter any 5 numbers: ";
    for(int i=0; i<5; i++){
        cin>>array[i];
        int num = array [i];

        if (num % 3 == 0){
            cout<<num<<" is divisible by 3\n";
        }
    }
}