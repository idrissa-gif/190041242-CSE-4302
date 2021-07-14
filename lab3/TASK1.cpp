#include<iostream>

using namespace std;

class Counter
{
private:
    int count;
    int step_val;

public:
    Counter():count(0),step_val(1)
    {
    }
    Counter(int cnt,int step):count(cnt),step_val(step)
    {
    }
    void display()
    {
        cout<<"count = "<<getCount()<<" step value = "<<step_val<<endl;
    }
    void setIncrementStep(int step_val)
    {
        this->step_val= step_val>-1 ? step_val : this->step_val;
    }
    int getCount()
    {
        return count;
    }
    void increment()
    {
        count+=step_val;
    }
    void resetCount()
    {
        count = 0;
    }
    Counter operator+(Counter C3) const;

    Counter operator+(int var) const;

    Counter operator += (Counter C2) const;

    friend Counter operator+(int var, Counter C2);

    Counter operator ++()
    {
        return Counter(++count,step_val);
    }
    Counter operator ++(int)
    {
        return Counter(count++,step_val);
    }
};
Counter Counter::operator += (Counter C2) const
{
    Counter temp;
    temp.count = count + C2.count;
    temp.step_val +=step_val + C2.step_val;
    return temp;
}
Counter Counter::operator+(Counter C3) const
{
    Counter temp;
    temp.count = count+C3.count;
    temp.step_val = min(step_val,C3.step_val);
    return temp;
}
Counter Counter::operator+(int var) const
{
    Counter temp;
    temp.count = count + var;
    temp.step_val = step_val;
    return temp;
}

Counter operator+(int var, Counter C2)
{
    Counter temp;
    temp.count = C2.count + var;
    temp.step_val = C2.step_val;
    return temp;
}

int main ()
{
    Counter c1 , c2 , c3;
    c1.setIncrementStep(4);
    c1.increment();
    c2+=c1;
    cout<<"c1 ";
    c1.display();

    return 0;
}
