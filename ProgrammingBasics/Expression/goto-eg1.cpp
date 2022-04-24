#include<iostream>
using namespace std;
int main(){
    string uname,upass;

    user_input:
    cout<<"Enter Username: ";
    cin>>uname;
    cout<<"Enter Password: ";
    cin>>upass;

    if(uname!= "mmit" || upass != "123"){
        goto user_input;
    }
    cout<<"\nLogin Success";
    return 0;
}