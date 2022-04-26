#include<iostream>
using namespace std;
int main(){
    int len = 3;
    int numbers[len] = {7, 9 , 13};

    cout<<"\n_____From first element_____\n";
    for(int i=0;i<len;i++)
        cout<<numbers[i]<<"\t";

    cout<<"\n_____From last element_____\n";
    for(int i = (len - 1 ) ; i>=0; i--){
        cout<<numbers[i]<<"\t";
    }
    return 0;
}