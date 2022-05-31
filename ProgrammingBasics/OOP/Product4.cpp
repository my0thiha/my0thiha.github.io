#include<iostream>
using namespace std;

class Product {
    private:
        int barCode;
        string name;
    public:
        Product(){

        }
    bool setBarcode (int code){
        if (code >= 1000 && code <= 9999){
            barCode = code;
            return true;
        }
        else{
            return false;
        }
    }
    int getBarcode(){
        return barCode;
    }
    void setName(string input){
        input = name;
    }
    string getName(){
        return name;
    }
    void showData(){
        cout<<"\n-----Information-----\n\n";
        cout<<"Barcode: "<<getBarcode();
        cout<<"\n\nName: "<<getName();
    }
};
int main(){
    int pCode;
    string pName;
    Product p1 = Product();

    cout<<"Enter Barcode: ";
    cin>>pCode;
    p1.setBarcode(pCode);

    bool result = p1.setBarcode(pCode);
    while(!result){
        cout<<"\nEnter valid barcode: ";
        cin>>pCode;
        result = p1.setBarcode(pCode);
    }
    cout<<"\nEnter product name: ";
    cin>>pName;
    p1.setName(pName);
    p1.showData();
    return 0 ;

}