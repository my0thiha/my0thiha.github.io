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
    int total=0;
    for (int i = 0; i<2; i++){
        for(int j = 0 ; j<2;j++){
            cout<<num[i][j]<<"\t";
        }
        cout<<"\n";
    }
     for (int c = 0; c<2; c++){
        for(int r = 0 ; r<2;r++){
            total = total + num[r][c];
        }
        cout<<"\nTotal value of "<<c<<"column: "<<total;
        total = 0;
     }
     return 0;
}
