#include<iostream>

using namespace std;

class Counter
{
private:
    int count , step;
public:
    Counter(): count(0) , step(0)
    {

    }
    void setIncrementStep(int step_val)
    {
        step=step_val;
    }
    int getCount()
    {
        return count;
    }
    void increment()
    {
        count+=step;
    }
    void resetCount()
    {
        count=0;
    }
};


int main()
{
    Counter C1;
    C1.setIncrementStep(5);
    cout<<C1.getCount()<<endl;
    C1.increment();
    cout<<C1.getCount()<<endl;
    C1.setIncrementStep(2);
    C1.increment();
    cout<<C1.getCount()<<endl;
    C1.resetCount();
    cout<<C1.getCount()<<endl;
     C1.increment();
    cout<<C1.getCount()<<endl;
    return 0;
}
