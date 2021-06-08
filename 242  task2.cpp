#include<iostream>

using namespace std;

class RationalNumber
{
private:
    int numerator , denominator ;
public:
    void assign(int num , int denom);
    double convert();
    void invert();
    void print();
};

void RationalNumber::assign(int num , int denom)
{
    if(denom==0) cout<<"Invalid rational number"<<endl;
    else
    {
        numerator=num;
        denominator=denom;
    }
}

double RationalNumber::convert()
{
    return double(numerator)/denominator;
}

void RationalNumber::invert()
{
    int temp = numerator;
    numerator = denominator;
    denominator = temp;
}

void RationalNumber::print()
{
    cout<<numerator<<'/'<<denominator<<endl;
}

int main()
{
    RationalNumber Rational;
    Rational.assign(3,2);
    cout<<Rational.convert()<<endl;
    Rational.print();
    Rational.invert();
    cout<<Rational.convert()<<endl;
    Rational.print();
    return 0;
}
