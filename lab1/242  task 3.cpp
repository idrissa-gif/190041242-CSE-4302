#include<iostream>

using namespace std;

class Medicine
{
private:
    char * name , * genericName;
    double price , discountPercent;
    int unitPrice;
public:
    Medicine():price(0),discountPercent(5)
    {

    }
    void assignName(char * V_name , char * V_genericName);
    void assignPrice(double price);
    void setDiscountPercent(double percent);
    double getSellingPrice(int nos);
    void display();
};

void Medicine::assignName(char * V_name , char * V_genericName)
{
    name=V_name;
    genericName=V_genericName;
}

void Medicine::assignPrice(double V_price)
{
    if(V_price<0) cout<<V_price<<" is negative"<<endl;
    else price=V_price;
}

void Medicine::setDiscountPercent(double percent)
{
    if(percent>=0 && percent<=45) discountPercent=percent;
    else cout<<percent<<" is out range"<<endl;
}

double Medicine::getSellingPrice(int nos)
{
    unitPrice=nos;
    price = price - discountPercent;
}

void Medicine::display()
{
    cout<<name<<'('<<genericName<<')'<< " has a unit price BDT "
        <<price<<". Current discount "<<discountPercent<<'%'<<endl;
}

int main()
{
    Medicine Med;
    Med.assignName("Napa","Paracetamol");
    Med.assignPrice(10.80);
    Med.setDiscountPercent(10);
    Med.getSellingPrice(18);
    Med.display();
    return 0;
}
