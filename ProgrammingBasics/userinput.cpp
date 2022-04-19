#include<iostream>
using namespace std;
int main(){
    int empNo;
    string name;
    string email;
    int salary;


    cout<<"------User Input------";
    cout<<"\nEnter Employee No: ";
    cin>>empNo; // empNo = 101
    cin.ignore();
    cout<<"\nEnter Name: ";
    // cin>>name; // name=susu
    getline(cin,name);
    cout<<"\nEnter Email: ";
    cin>>email; // email= susu@gmail.com
    cout<<"\nEnter Your Salary: ";
    cin>>salary; // salary = 500000
}