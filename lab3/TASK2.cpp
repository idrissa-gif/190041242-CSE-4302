#include<iostream>
#include<cmath>

using namespace std;

class Coordinate
{
private:
    float x , y;
public:
    Coordinate():x(0.0),y(0.0)
    {
    }
    Coordinate(float valx , float valy):x(valx),y(valy)
    {
    }
    ~Coordinate()
    {
        //cout<<"The destructor is called"<<endl;
    }
    void display()
    {
        cout<<"Coordinate (X , Y) = " << '('<<x<<','<<y<<')'<<endl;
    }
    float getDistance(Coordinate c)
    {
        return sqrt(pow ((x-c.x),2) + pow((y - c.y),2));
    }
    float getDistance()
    {
        return sqrt((x*x) + (y*y));
    }
    void move_x(float val)
    {
        x+=val;
    }
    void move_y(float val)
    {
        y+=val;
    }
    void move(float val)
    {
        x+=val;
        y+=val;
    }
    friend bool operator == (Coordinate c1 , Coordinate c2);
    friend bool operator != (Coordinate c1 , Coordinate c2);
    friend bool operator <(Coordinate c1 , Coordinate c2);
    friend bool operator <= (Coordinate c1 , Coordinate c2);
    friend bool operator >(Coordinate c1 , Coordinate c2);
    friend bool operator >=(Coordinate c1 , Coordinate c2);
    Coordinate operator++()
    {
        return Coordinate(++x,++y);
    }
    Coordinate operator++(int )
    {
        return Coordinate(x++,y++);
    }
    Coordinate operator--()
    {
        return Coordinate(--x,--y);
    }
    Coordinate operator--(int )
    {
        return Coordinate(x--,y--);
    }
};
bool operator == (Coordinate c1 , Coordinate c2)
{
    if(c1.x==-c2.x&&c1.y==-c2.y) return true;
    else return false ;
}
bool operator != (Coordinate c1 , Coordinate c2)
{
    if(c1.x != -c2.x && c1.y != -c2.y) return true;
    else return false ;
}

bool operator < (Coordinate c1 , Coordinate c2)
{
    if(c1.x<-c2.x&&c1.y<-c2.y) return true;
    else return false ;
}
bool operator <= (Coordinate c1 , Coordinate c2)
{
    if(c1.x<=-c2.x&&c1.y<=-c2.y) return true;
    else return false ;
}
bool operator > (Coordinate c1 , Coordinate c2)
{
    if(c1.x > -c2.x && c1.y > -c2.y) return true;
    else return false ;
}
bool operator >= (Coordinate c1 , Coordinate c2)
{
    if(c1.x >= -c2.x && c1.y >= -c2.y) return true;
    else return false ;
}

int main()
{
    Coordinate c1(1,1) , c2(-1,-1);
    cout<<"C1 ";
    c1.display();
    cout<<"C2 ";
    c2.display();
    if(c1==c2) cout<<"c1 equals c2"<<endl;
    else cout<<"c1 not equal to c2"<<endl;

    if(c1!=c2) cout<<"c1 different to c2"<<endl;
    else cout<<"c1 equals c2"<<endl;

    if(c1>c2) cout<<"c1 greater than c2"<<endl;
    else cout<<"c1 not greater than c2"<<endl;

    if(c1>=c2) cout<<"c1 greater or equal to c2"<<endl;
    else cout<<"c1 not greater or equal to c2"<<endl;

    if(c1<c2) cout<<"c1 less than c2"<<endl;
    else cout<<"c1 not less than c2"<<endl;

    if(c1<=c2) cout<<"c1 less or equal to c2"<<endl;
    else cout<<"c1 not less or equal to c2"<<endl;

    return 0;
}
