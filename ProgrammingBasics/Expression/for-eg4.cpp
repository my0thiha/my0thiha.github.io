#include<iostream>
using namespace std;
int main(){

    int s_num, e_num;
    cout<<"Enter Start Number : ";
    cin>>s_num;
    cout<<"Enter End Number : ";
    cin>>e_num;

    for(int i = s_num; i<= e_num; i++){
        if( i%2 == 1){
            cout<<i<<"\n";
        }
    }
    return 0;
}