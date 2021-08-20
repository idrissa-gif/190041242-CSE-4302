#include <iostream>
#include <string>
using namespace std;

enum class Material {Wood,Board,Steel,foam};
class Furniture
{
protected:
    string name;
    double price;
    double discount;
    Material madeof;
public:

    Furniture(string n,double p,double d,Material m):name("Furniture name"),price(0),discount(0),madeof(Material::Wood)
    {
        setName(n);
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
    }
    void setName(string n)
    {
        name = n;
    }
    void setPrice(double val)
    {
        if(val>0)
            price=val;
    }
    void setDiscount(double val)
    {
        if(val<=price)
            discount=val;
    }
    void setMadeof(Material val)
    {
        madeof=val;
    }
    string getMadeof()
    {
        if(madeof==Material::Wood)
            return string("Wood");
        else if(madeof==Material::Board)
            return string("Board");
        else if(madeof==Material::Steel)
            return string("Steel");
        else
            return string("");
    }
    virtual void productDetails()=0;
};

enum class BedSize {Single,SemiDouble,Double};

class Bed:public Furniture
{
private:
    BedSize Bsize;
public:
    Bed(string n,double p,double d,Material m,BedSize b):Furniture(n,p,d,m), Bsize(BedSize::Single)
    {
        setBsize(b);

        cout<<"Bed element successfully set "<<endl;
    }
    void productDetails()
    {
        cout<<"=================THE BED DETAILS==================="<<endl;
        cout<<"Product Name: "<<name<<endl;
        cout<<"Price of the product: "<<price<<endl;
        cout<<"Discount of the product: "<<discount<<endl;
        cout<<"Material type: "<<getMadeof()<<endl;
        cout<<"Bed size: "<<getBsize() <<endl;
        cout<<"-------------------------------------------------------------------\n\n";
    }
    void setBsize(BedSize val)
    {
        Bsize=val;
    }

    string getBsize()
    {
        if(Bsize==BedSize::Single)
            return string("Single");
        else if(Bsize==BedSize::SemiDouble)
            return string("SemiDouble");
        else if(Bsize==BedSize::Double)
            return string("Double");
        else
            return string("");
    }
};

enum class SofaSize {One, Two, Three, Four, Five};

class Sofa:public Furniture
{
private:
    SofaSize seat;
public:
    Sofa(string n,double p,double d,Material m,SofaSize s):Furniture(n,p,d,m),seat(SofaSize::One)
    {
        setSeat(s);

        cout<<"Sofa element successfully set "<<endl;
    }
     void productDetails()
    {
        cout<<"=================THE SOFA DETAILS==================="<<endl;
        cout<<"Product Name: "<<name<<endl;
        cout<<"Price of the product: "<<price<<endl;
        cout<<"Discount of the product: "<<discount<<endl;
        cout<<"Material type: " <<getMadeof()<<endl;
        cout<<"Sofa size: "<<getSofaSize()<<endl;
        cout<<"-------------------------------------------------------------------\n\n";
    }
    void setSeat(SofaSize s)
    {
        seat=s;
    }
    string getSofaSize()
    {
        if(seat==SofaSize::One)
            return string("One");
        else if(seat==SofaSize::Two)
            return string("Two");
        else if(seat==SofaSize::Three)
            return string("Three");
        else if(seat==SofaSize::Four)
            return string("Four");
        else if(seat==SofaSize::Five)
            return string("Five");
        else return string(" ");
    }
};

enum class AlmirahSize {Single , SemiDouble , Double};
class Almirah:public Furniture
{
private:
    AlmirahSize almirahSize;
public:
    Almirah(string n,double p,double d,Material m,AlmirahSize al) : Furniture(n,p,d,m),almirahSize(AlmirahSize::Single)
    {
        SetAlmirah(al);
        cout<<"Almirah element successfully set "<<endl;
    }
    void SetAlmirah(AlmirahSize al)
    {
        almirahSize = al;
    }
    void productDetails()
    {
        cout<<"=================THE ALMIRAH DETAILS==================="<<endl;
        cout<<"Product Name: "<<name<<endl;
        cout<<"Price of the product: "<<price<<endl;
        cout<<"Discount of the product: "<<discount<<endl;
        cout<<"Material type: " <<getMadeof()<<endl;
        cout<<"Almirah size: "<<getAlmirah()<<endl;
        cout<<"-------------------------------------------------------------------\n\n";
    }
    string getAlmirah()
    {
        if(almirahSize==AlmirahSize::Single)
            return string("Single");
        else if(almirahSize==AlmirahSize::SemiDouble)
            return string("SemiDouble");
        else if(almirahSize==AlmirahSize::Double)
            return string("Double");
        else return string(" ");
    }
};

int main()
{
    Furniture* f_list[4];

    /**
        task 1
        So that following lines can be executed without error
    */
      f_list[0] = new Bed("Bed 1",10000,123,Material::Wood,BedSize::Single);
      f_list[1] = new Sofa("Sofa",11000,234,Material::Steel,SofaSize::Five);
      f_list[2] = new Almirah("Almirah",13000,345,Material::Wood,AlmirahSize::Double);
      f_list[3] = new Bed("Bed 2",10090,123,Material::Wood,BedSize::Single);

    /**task 1 ends here*/
   /**
        task 2
        So that following lines can be executed without error

        task 3 (Modify productDetails)
    */

    for(int i=0; i<4; i++)
    {
        f_list[i]->productDetails();
    }

    delete f_list[0];
    delete f_list[1];
    delete f_list[2];
    delete f_list[3];
    /**task 2 ends here*/

}
