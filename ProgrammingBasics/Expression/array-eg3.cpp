#include<iostream>
using namespace std;
int main(){
    int marks[3] = {100,50,90};
    //loop

    for (int i=0; i<3; i++){
        cout<<marks[i]<<"\n";

        string names[3] = {"Aung Aung","Su Su","Cherry"};
        //loop
        cout<<"_____Name List_____\n";
        for (int i =0 ; i<3; i++){
            cout<<names[i]<<"\n";
        }
        cout<<"\n______Name with Marks______\n";
        for(int i=0;i<3;i++){
            cout<<names[i]<<" got "<<marks[i]<<" marks.\n";
            //Aung Aung got 100 marks.
        }
        return 0;
    }
}