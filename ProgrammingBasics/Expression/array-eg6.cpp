#include<iostream>
using namespace std;
int main(){
    int len = 3;
    int numbers[3] = {13,21,19};

    cout<<"\n_____All Elements_____\n";
    for (int i=0; i<len; i++){
        cout<<numbers[i]<<"\t";
    }

    //assume
    int max_num = numbers[0];
    for(int i = 1; i < len; i ++){
        if (max_num<numbers[i]){
            max_num=numbers[i];
        }
    }
    cout<<"\nMaximum number: "<<max_num;
}