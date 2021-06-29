#include<iostream>
#include<iomanip>

using namespace std;

class Employee
{
private:
    string EmpName ;
    int ID;
    int Age;
    float salary;
    string getStatus()
    {
        if(Age<=25)
        {
            if(salary<20000) return "Low";
            else return "Moderate";
        }
        else
        {
            if(salary<=21000) return "Low";
            else if(salary>21000&&salary<=60000) return "Moderate";
            else return "High";
        }
    }
public:
    Employee(string EmpName,int ID ,int Age , float salary):EmpName(EmpName),ID(ID),Age(Age),salary(salary)
    {

    }
    void FeedInfo(string EmpName, int ID , int salary )
    {
        this->EmpName=EmpName;
        this->ID=ID;
        this->salary=salary;
    }
    void ShowInfo()
    {
        cout<<setw(20)<<"EMPLOYEE INFORMATION"<<endl;
        cout<<"Employee name: "<<EmpName<<endl;
        cout<<"Employee ID: "<<ID<<endl;
        cout<<"Employee age: "<<Age<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
        cout<<getStatus()<<endl;

    }

};

int main ()
{
    Employee E1("zainab",1232,35,20000);
    E1.ShowInfo();
    return 0;
}
