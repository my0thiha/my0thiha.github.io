#include<iostream>
using namespace std;
class SaleRecord{
    //data
    public:
        string item_name;
        double unit_price;
        int sale_qty;
    //functions
    void addSaleRecord(string name,int qty,double price){
        item_name = name;
        unit_price = price;
        sale_qty = qty;
    }
    double getSubTotal (){
        return (unit_price * sale_qty);
    }
    void displayInfo(){
        cout<<"\n";
        cout<<item_name<<"\t";
        cout<<unit_price<<"ks.\t";
        cout<<sale_qty<<"\t";
        cout<<getSubTotal()<<"ks.\n";
    }
};

int main(){

}