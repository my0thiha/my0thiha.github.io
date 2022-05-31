#include<iostream>
using namespace std;
class Account{
    //data
    private :
        string account_holder;
        string account_no;
        int balance;
    //methods
    public: //constructor
    Account(string holder,string no,int balance){
        this->account_holder = holder;
        this->account_no= no ;
        this->balance = balance;
    }
    Account(){

    }
    void initializeData(string holder,string no,int amt){
        this->account_holder = holder;
        this->account_no= no ;
        this->balance = balance;
    }
    void showData(){
        cout<<"\n-----Account Info-----\n\n";
        cout<<"Name: "<<this->account_holder;
        cout<<"\nNumber: "<<this->account_no;
        cout<<"\nCurrent Balance: "<<this->balance<<" ks.";
    }
    int main(){
        Account acc1 = Account ();//using 0 arg constructor(default destructor)
        acc1.initializeData("Jeon","12345678",50000);
        acc1.showData();
        
        cout<<"\n------Another Account-----\n\n";
        Account acc2 = Account("Jk","7924121",600000);//using 3 arg constructor
        acc2.showData();
    }

};