#include<iostream>
using namespace std;
int main() {
    int userinput;

    cout<<"Enter no. of days: ";
    cin>>userinput;

    int year = userinput/365,
    month = (userinput%365)/30,
    day = (userinput%365)%30;

    cout<<"Years: "<< year;
    cout<<"\nMonths: "<< month;
    cout<<"\nDays: "<<day;
}