#include<iostream>
#include<cmath>

using namespace std;

class Rectangle
{
private:
    float length , width;
public:
    Rectangle():length(1),width(1)
    {

    }
    Rectangle(float length , float width):length(length),width(length)
    {

    }
    void set(float length, float width)
    {
        if(length>=1.0&&length<20.0&&width>=1.0&&width<20.0)
        {
            this->length=length;
            this->width=width;
        }
        else
            cout<<"Error the values are out of range"<<endl;
    }
    void get()
    {
        cout<<"Length: "<<length<<" Width: "<<width<<endl;
    }
    void perimeter()
    {
        cout<<"the perimeter of the rectangle is:"<<2*(length+width)<<endl;
    }
    void area()
    {
        cout<<"the area of the rectangle is:"<<length*width<<endl;
    }
    void diagonal()
    {
        cout<<"the diagonal of the rectangle is:"<<sqrt((length*length)+(width*width))<<endl;
    }
    void angle ()
    {
        cout<<"the angle between diagonal and length is: "<<atan(length/width)<<endl;
    }
};
int main ()
{
    int length , width;
    Rectangle r1 , r2(3,5);
    r1.perimeter();
    r1.area();
    r1.diagonal();
    r1.angle();
    r1.get();
    cout<<"Enter the length and width of the rectangle: "<<endl;
    cin>>length>>width;
    r1.set(length,width);
    return 0;
}
