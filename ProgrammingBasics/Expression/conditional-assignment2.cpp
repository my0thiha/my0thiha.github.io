#include<iostream>
using namespace std;
int main(){
    string username,password;
    cout<<"Enter username: ";
    cin>>username;
    cout<<"Enter password: ";
    cin>>password;

    if(username=="mmit" && password == "admin123"){
        cout<<"Login success!";
    }
    else if(username !="mmit" && password != "admin123"){
        cout<<"username and password doesnt match";
    }
    else if(username !="mmit" && password == "admin123"){
        cout<<"username is incorrect";
    }
    else if(username =="mmit" && password != "admin123"){
        cout<<"password is incorrect";
    }
    return 0;
}