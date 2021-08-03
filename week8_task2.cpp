#include<iostream>
#include<iomanip>

using namespace std;
class Staff
{
    protected:
    int code ;
    string name ;
    public:

    // ARGUMENT CONSTROCTOR

    Staff(string name , int code): code(code), name(name)
    {
    }
    // TO SET THE NEW OR UPDATE THE VALUES OF AN EXISTING OBJECT

    void setinfo()
    {
        cout<<"Enter the code of the staff: ";
        cin>>code;
        cout<<"Enter the name of the staff: ";
        cin>>name;
    }
};

class Teacher : protected Staff
{
    private:
    string subject;
    string publication ;
    public:
    Teacher(string name , int code , string subject , string publication):Staff(name, code), subject(subject),publication(publication)
    {

    }
    void setinfo()
    {
        Staff::setinfo();
        cout<<"Enter the name of the subject : ";
        cin>>subject;
        cout<<"Enter the publication name : ";
        cin>>publication;
    }

    void getinfo()
    {
        cout<<"About teacher:"<<endl;
        cout<<"name"      <<setw(15) <<"code"      <<setw(12)  <<"subject" <<setw(16) <<"publication"<<endl;
        cout<<Staff::name <<setw(10) <<Staff::code <<setw(8)  <<subject   <<setw(20)   <<publication<<endl;
        cout<<"\n\n"<<endl;
    }

};

class Officer : protected Staff
{
    private:
    string grade;
    public:

    Officer(string name , int code , string grade) : grade(grade),Staff(name, code)
    {

    }
    void setinfo()
    {
        Staff::setinfo();
        cout<<"Enter the officer grade : ";
        cin>>grade;
    }
    void getinfo()
    {
        cout<<"About officer:"<<endl;
        cout<<"name"     <<setw(10) <<"code"     <<setw(15)  <<"Category"<<endl;
        cout<<Staff::name<<setw(10) <<Staff::code<<setw(15)  <<grade<<endl;
        cout<<"\n\n"<<endl;
    }

};

class Typist : protected Staff
{
    protected:
    float speed;
    int wages;
    public:

    Typist(string name , int code , float speed , int wages):speed(speed),wages(wages),Staff(name, code)
    {

    }
    void setinfo()
    {
        Staff::setinfo();
        cout<<"Enter the typist speed : ";
        cin>>speed;
    }

};

class Regular : protected Typist
{
    public:
    Regular(string name , int code , float speed , int wages):Typist(name, code , speed, wages)
    {

    }
    void setinfo()
    {
        Typist::setinfo();
    }
    void getinfo()
    {
        cout<<"About regular typist:"<<endl;
        cout<<"name"       <<setw(10) <<"code"      <<setw(8) <<"speed"       <<setw(12)  <<"wage"<<endl;
        cout<<Staff::name  <<setw(10) <<Staff::code <<setw(8) <<Typist::speed <<setw(12)  <<Typist::wages<<endl;
        cout<<"\n\n"<<endl;
    }
};

class Casual : protected Typist
{
    private:
    int daily;
    public:
    Casual(string name , int code , float speed , int wages, int daily):Typist(name, code , speed, wages) , daily(daily)
    {

    }

    void setinfo()
    {
        Typist::setinfo();
        cout<<"Enter the daily of the casual typist : ";
        cin>>daily;
    }
    //TO GET THE INFORMATION OF THE TYPIST
    void getinfo()
    {
        cout<<"About casual typist:"<<endl;
        cout<<"name"     <<setw(10)<<"code"     <<setw(8)   <<"speed"      <<setw(8)  <<"wage"         <<setw(8)<<"daily"<<endl;
        cout<<Staff::name<<setw(10)<<Staff::code<<setw(5)   <<Typist::speed<<setw(8)  <<Typist::wages <<setw(8)<<daily<<endl;
        cout<<"\n\n"<<endl;
    }

};

int main ()
{
    Teacher T("Tanjila",23,"CSE","DEEP ALGORITHM" );
    T.getinfo();

    /// TO REGISTER A OFFICER
    Officer O("Alam",34,"FIRST CLASS");
    O.getinfo();

    /// TO REGISTER A REGULAR TYPIST
    Regular R("ALIM",23,89.2,10002);
    R.getinfo();
    /// TO REGISTER A CASUAL TYPIST
    Casual C("SALMA",234,100,10000,89);
    C.getinfo();

    ///UPDATE OR SET NEW VALUE TO THE OBJECT
    T.setinfo();
    T.getinfo();

    O.setinfo();
    O.getinfo();

    R.setinfo();
    R.getinfo();

    C.setinfo();
    C.getinfo();

    return 0;
}
