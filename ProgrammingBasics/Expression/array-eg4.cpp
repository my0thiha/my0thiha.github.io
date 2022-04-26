#include<iostream>
using namespace std;
int main(){
    int length = 3;
    int marks[length];
    //loop
    for (int i =0; i<length;i++){
        cout<<"Enter mark "<<(i+1)<<": ";
        cin>>marks[i];
    }
    //while
    cout<<"______Mark List______\n";
    int j = 0;
    while (j < length){
        cout<<marks[j]<<"\n";
        j++;
    }
    //do while
    j=0;
    int total = 0;
    do{
        total = total + marks[j];
        j++;
    }while(j<length);

    cout<<"Total mark: "<<total;
    return 0;
}