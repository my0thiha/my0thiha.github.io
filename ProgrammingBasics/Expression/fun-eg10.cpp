#include<iostream>
using namespace std;

int max(int n1,int n2){
    return(n1<n2) ? n2 : n1;
}
int max(int n1,int n2,int n3){
    int max_val = n1;
    
    if(n2>n1){
        max_val=n2;
    }
    if(n3>max_val){
        max_val = n3;
    }
    return max_val;
}

int main(){
    cout<<"Max value: "<<max(100,200);
    cout<<"\nMax value: "<<max(100,200,300);
}