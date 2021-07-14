#include<iostream>

using namespace std;

class FLOAT
{
private:
    float data;
public:
    FLOAT():data(0.0){}
    FLOAT(float val):data(val){}
    void display()
    {
        cout<<data;
    }
    FLOAT operator+(FLOAT F)
    {
        cout<<"F1+F2 = "<<data+F.data<<endl;
        //return FLOAT(data+F.data);
    }
    FLOAT operator-(FLOAT F)
    {
        cout<<"F1-F2 = "<<data-F.data<<endl;
        //return FLOAT(data-F.data);
    }
    FLOAT operator*(FLOAT F)
    {
        cout<<"F1*F2 = "<<data*F.data<<endl;
        //return FLOAT(data*F.data);
    }
    FLOAT operator / (FLOAT F)
    {
        cout<<"F1/F2 = "<<data/F.data<<endl;
        //return FLOAT(data/F.data);
    }
//    operator int()
//    {
//        return (int) data;
//    }

};
int main ()
{
    FLOAT F1(2.5);
    FLOAT F2(3.1);
    F1+F2;
    F1-F2;
    F1*F2;
    F1/F2;
    int i= (int)F1;
    cout<<i;
    return 0;
}
