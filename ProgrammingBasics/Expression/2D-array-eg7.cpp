#include<iostream>
using namespace std;
int main(){
    float prices[2][2] = { {1200.9,450} , {1300,1600} };

    cout<<"\n_________Price List_________\n";
    for (int r = 0; r <2; r++){
        for (int c=0; c<2; c++){
            cout<<prices[r][c]<<"\t";
        }
        cout<<"\n";
    }
    //find max price
    for (int r = 0; r<2; r++){
    float max_price = prices[r][0];
        for (int c = 0; c<2; c++){
            if (max_price<prices[r][c]){
                max_price = prices[r][c];
            }
        }
        cout<<"\nMax price in "<<r<<" row is "<<max_price;
    }
    return 0;
}