#include<iostream>
using namespace std;
int main(){
    int num[2][2];
    for (int i = 0; i <2; i++){
        for (int j=0; j<2; j++){
            cout<<"Enter number: ";
            cin>>num[i][j];
        }
    }
    //calculate total and count
    cout<<"\n_________All Elements_________\n";
    int total=0 , count = 0;
    for (int i = 0; i<2; i++){
        for(int j = 0 ; j<2;j++){
            cout<<num[i][j]<<"\t";
            total = total + num[i][j];
            count++;
        }
        cout<<"\n";
    }
    //display 
    cout<<"\nTotal value: "<<total;
    cout<<"\nNumber of numbers: "<<count;
    return 0;

}