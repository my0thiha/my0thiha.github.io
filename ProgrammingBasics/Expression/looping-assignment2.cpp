#include<iostream>
using namespace std;
int main(){
    int start,end;
    cout<<"Enter start value: ";
    cin>>start;
    cout<<"Enter End value: ";
    cin>>end;
    cout<<"Number divisible by 8 and 5: "<<"\n";
    for(int i=start; i<end; i++){
        if(i%8 == 0 && i%5 == 0){
            cout<<i<<"\n";
        }
    }
    cout<<"Number divisible by only 8: "<<"\n";
    for(int i=start; i<end; i++){
        if(i%8 == 0 && i%5 != 0){
             cout<<i<<"\n";
         }
    }
    cout<<"Number divisible by only 5: "<<"\n";
    for(int i=start; i<end; i++){
        if(i%8 != 0 && i%5 == 0){
             cout<<i<<"\n";
         }
    }
    cout<<"Numbers not divisible by 8 and 5: "<<"\n";
    for(int i=start; i<end; i++){
        if(i%8 != 0 && i%5 != 0){
             cout<<i<<"\n";
         }
    }
        // else if(i%8 == 0 && i%5 != 0){
        //     cout<<"Number divisible by only 8: "<<"\n"<<i<<"\n";
        // }
        // else if(i%8 != 0 && i%5 == 0){
        //     cout<<"Number divisible by only 5: "<<"\n"<<i<<"\n";
        // }
        // else if (i%8 != 0 && i%5 != 0){
        //      cout<<"Number not divisible by 8 & 5: "<<"\n"<<i<<"\n";
        // }
}
    