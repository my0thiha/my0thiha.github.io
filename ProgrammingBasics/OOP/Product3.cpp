#include<iostream>
using namespace std;

class Product{
    private:
        string name;
        int price;
        int barCode;
    
    public:
        Product(){

        }
        void setName(string input){
            name = input;
        }
        string getName(){
            if (name == ""){
                cout<<"Name is empty!";
            }
            else{
                return name;
            }
        }
        void setBarcode(int code){
            if (code >=1000 && code <= 9999){
                barCode = code;
            }
            else {
                barCode = 0;
                cout<<"\nIncorrect bar code number.";
            }
        }
        int getBarcode(){
            return barCode;
        }
        void setPrice(float pPrice){
            if (pPrice < 100){
                price = 0;
                cout<<"\nPrice must be atleast 100ks.";
            }
            else{
                price = pPrice;
            }
        }

        float getPrice(){
            return price;
        }

        void showData(){
            cout<<"\n-----Information-----\n\n";
            cout<<"Barcode: "<<getBarcode();
            cout<<"\nName: "<<getName();
            cout<<"\nPrice: "<<getPrice();
        }
};
int main(){
    int pCode;
    string pName;
    float pPrice;
    Product p1 = Product();

    cout<<"Enter Bar code: ";
    cin>>pCode;

    p1.setBarcode(pCode);
}