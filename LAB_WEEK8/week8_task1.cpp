#include<iostream>

using namespace std;

class Truck
{
    protected:
    int max_acc;
    int fuel_cap;
    int load_cap;
    public:
    Truck():max_acc(0.0),fuel_cap(0),load_cap(0)
    {

    }
    Truck(int max_acc, int fuel_cap,int load_cap):max_acc(max_acc),fuel_cap(fuel_cap),load_cap(load_cap)
    {

    }

    void setter(int max_acc, int fuel_cap, int load_cap);
    virtual void setter(float radius)
    {
    }
    virtual void setter(string comfort , bool warm)
    {
    }
    virtual void setter( float max_fuel_con_rate,float max_energy_prod_rate,float avg_rpm)
    {
    }
    virtual void setter(string open_mode)
    {
    }
    void getter();
    virtual void getter_Wheel_info()
    {
    }
    virtual void getter_Seat_info()
    {
    }
    virtual void getter_Engine_info()
    {
    }
    virtual void getter_Door_info()
    {
    }
};

void Truck :: setter(int max_acc, int fuel_cap, int load_cap)
{
    this->max_acc = max_acc;
    this->fuel_cap = fuel_cap;
    this->load_cap = load_cap;
}
void Truck :: getter()
{
    cout<<"Maximum acceleration is : "<<max_acc<<endl;
    cout<<"Fuel capacity is : "<<fuel_cap<<endl;
    cout<<"Load capacity is : "<<load_cap<<endl;
}
class Wheel : public Truck
{
    private:
    float radius;
    public:
    Wheel():radius(0)
    {

    }
    Wheel(int radius):radius(radius)
    {

    }
    void setter(float radius)
    {
        this->radius = radius;
    }
};

class Seat : public Truck
{
    private:
    string comfort;
    bool warm;
    public:
    void setter(string comfort , bool warm)
    {
        this->comfort = comfort;
        this->warm = warm;
    }
    void getter_Seat_info()
    {
        cout<<"Seat comfortability: "<<comfort<<endl;
        cout<<"Presence Seat Warmer: ";
        warm==true?cout<<"Yes":cout<<"No"<<endl;
    }
};

class Engine : public Truck
{
    private:
    float max_fuel_con_rate;
    float max_energy_prod_rate;
    float avg_rpm;
    public:
    Engine():max_fuel_con_rate(0),max_energy_prod_rate(0),avg_rpm(0)
    {

    }
    Engine(float fuel, float energy, float avg_rpm):max_fuel_con_rate(fuel),max_energy_prod_rate(energy),avg_rpm(avg_rpm)
    {

    }

    void setter( float max_fuel_con_rate,float max_energy_prod_rate,float avg_rpm);
    void getter_Engine_info();
};

void Engine :: getter_Engine_info()
{
    cout<<"Maximum Fuel Consumption Rate: "<<max_fuel_con_rate<<endl;
    cout<<"Maximum Energy Production Rate: "<<max_energy_prod_rate<<endl;
    cout<<"Average RPM: "<<avg_rpm<<endl;
}

void Engine :: setter( float max_fuel_con_rate,float max_energy_prod_rate,float avg_rpm)
{
    this->max_fuel_con_rate = max_fuel_con_rate;
    this->max_energy_prod_rate = max_energy_prod_rate;
    this->avg_rpm = avg_rpm;
}

class Door : public Truck
{
    private:
    string open_mode;
    public:
    Door():open_mode("sideways")
    {

    }
    Door(string mode):open_mode(mode)
    {

    }

    void setter(string open_mode)
    {
        this->open_mode=open_mode;
    }
    void getter_Door_info()
    {
        cout<<"Opening mode of the Door: "<<open_mode<<endl;
    }
};

int main ()
{
    Truck * car , c;
    Wheel w;
    Door d;
    Engine e;
    Seat s;
    car=&c;
    int max_acc , fuel_cap , load_cap;
    cout<<"Enter the Maximum accelation : ";
    cin>>max_acc;
    cout<<"Enter Fuel capicity : ";
    cin>>fuel_cap;
    cout<<"Enter Load capacity : ";
    cin>>load_cap;
    car->setter(max_acc,fuel_cap,load_cap); //TRUCK CLASS FUCTION IS CALLED

    //Wheel class
    car = &w;
    float radius;
    cout<<"Enter the Wheel raduis: ";
    cin>>radius;
    car->setter(radius); //WHEEL CLASS FUCTION IS CALLED

    //Seat class
    car = &s;
    string comfort ;
    bool warm;
    int check;
    cout<<"Enter the level of comfortability of the Seat : ";
    cin>>comfort;
    cout<<"Enter the level of warmer of the Seat(1/0) : ";
    cin>>check;
    check==1?warm=true:warm=false;
    car->setter(comfort,warm);

    //Engine class
    car = &e;
    float max_fuel_con_rate , max_energy_prod_rate, avg_rpm;
    cout<<"Enter Maximum Fuel consumption rate : ";
    cin>>max_fuel_con_rate;
    cout<<"Enter Maximum Energy product rate : ";
    cin>>max_energy_prod_rate;
    cout<<"Enter the Average RPM : ";
    cin>>avg_rpm;
    car->setter(max_fuel_con_rate,max_energy_prod_rate,avg_rpm); //ENGINE CLASS FUCTION IS CALLED

    ///Door class
    car = & d;
    string open_mode;
    cout<<"Enter the opening mode of the Door : ";
    cin>>open_mode;
    car->setter(open_mode); //DOOR CLASS FUCTION IS CALLED

    getchar();
    system("cls");
    cout<<"               =======================================  THE TRUCK INFORMATION  =================================  \n";
    car =& c;
    car->getter(); //TRUCK CLASS FUCTION IS CALLED
    car =&e;
    car->getter_Engine_info();
    car=&d;
    car->getter_Door_info();
    car=&s;
    car->getter_Seat_info();
    car=&w;
    car->getter_Wheel_info();
    cout<<"\n\n"<<endl;
    return 0;
}
