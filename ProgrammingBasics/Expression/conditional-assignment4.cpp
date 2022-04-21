#include<iostream>
using namespace std;
int main(){
    int prg,eng,math;
    cout<<"Enter Mark for Programming: ";
    cin>>prg;
    cout<<"Enter Mark for English: ";
    cin>>eng;
    cout<<"Enter Mark for Math: ";
    cin>>math;
    cout<<"-----------------------------------";

    int max = prg;

    if(eng>max){
        max=eng;
        cout<<"\nSubject that got maximun mark is English";
    }
    else if(math>max) {
        max=math;
        cout<<"\nSubject that got maximun mark is Math";
    }
    else{
        cout<<"\nSubject that got maximun mark is Programming";
    }
    
    int min = eng;

    if(prg<min){
        min=prg;
        cout<<"\nSubject that got minimun mark is Programming";
    }
    else if(math<min) {
        min=math;
        cout<<"\nSubject that got minimun mark is Math";
    }
    else{
        cout<<"\nSubject that got minimun mark is English";
    }

    cout<<"\nTotal Mark: "<<prg+eng+math;
    cout<<"\nAverage Mark: "<< float(prg+eng+math)/3;

    if(prg>80 && eng>80 && math>80){
        cout<<"\nDistinction Subjects: Programming , English , Math";
    }
    else if(prg>80 && eng>80){
        cout<<"\nDistinction Subjects: Programming , English";
    }
    else if(prg>80 && math>80){
        cout<<"\nDistinction Subjects: Programming , Math";
    }
    else if(eng>80 && math>80){
        cout<<"\nDistinction Subjects: English , Math";
    }
    
}