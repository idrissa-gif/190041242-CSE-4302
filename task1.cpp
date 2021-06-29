#include<iostream>
#include<cmath>
using namespace std;
typedef long long int lld;
class BankAccount
{
private:
    int account_no;
    string name;
    string accounttype;
    lld balance;
    lld minimum;

public:
    BankAccount():account_no(0),name("admin"),accounttype("savings"),balance(0),minimum(500)
    {

    }
    BankAccount(int account_no , string name , string accounttype,lld balance,lld minimum):account_no(account_no),name(name),accounttype(accounttype),balance(balance),minimum(minimum)
    {

    }
    ~BankAccount()
    {
        cout<<"Account of Mr. "<<name<<" with account no "<<account_no<<" is destroyed with a balance BDT "<<balance<<endl;
    }
    void Updateaccount(int account_no , string name, string accounttype , float balance , float minimum)
    {
        this->account_no = account_no;
        this->name = name ;
        this->accounttype = accounttype;
        this->balance = balance;
        this->minimum = minimum;
    }
    void AccountInfo()
    {
        cout<<"Account number: "<<account_no<<endl;
        cout<<"Account name: "<<name<<endl;
        cout<<"Account type: "<<accounttype<<endl;
        cout<<"Account balance: "<<balance<<endl;
        cout<<"Account minimum: "<<minimum<<endl;
    }
    void showBalance()
    {
        cout<<"The current balance: "<<balance<<endl;
    }
    void deposit(lld dep)
    {
        if(dep+balance<INT_MAX)
        {
            balance+=dep;
            cout<<"Transaction is successful "<<endl;
            cout<<"Your balance is now : "<<balance<<endl;
        }
        else
        {
            cout<<"Transaction failed: MAXIMUM BALANCE EXCEDED"<<endl;
            cout<<"Your balance is: "<<balance<<endl;
        }
    }
    void withdrawal(lld with)
    {
        if(balance<minimum)
        {
            balance-=with;
            cout<<"Transaction is successful "<<endl;
            cout<<"Your balance is now : "<<balance<<endl;
        }
        else
        {
            cout<<"Transaction failed: MINUMIM BALANCE EXCEDED"<<endl;
            cout<<"Your balance is: "<<balance<<endl;
        }
    }
    void givenInterest(lld interest = 3)
    {
        interest= float (interest)/100 * balance;
        cout<<"The given interest is: "<<interest<<endl;
        cout<<"the deducted tax is: "<<0.1*interest<<endl;
        interest-= 0.1*interest;
        cout<<"The given interest after deducted tax is: "<<interest<<endl;
        balance +=interest;
        cout<<"Your balance is: "<<balance<<endl;
    }
};
int main ()
{
    BankAccount P;
    int account_no;
    string name;
    string accounttype;
    float balance;
    float minimum;
    P.AccountInfo();

    return 0;
}
