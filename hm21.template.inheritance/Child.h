#include "Base.h"

template
<typename T1, typename T2, typename T3, typename T4>

class Child : public Base<T1, T2>
{
protected:
    T3 value3;
    T4 value4;

public:
    Child(T1 val1, T2 val2, T3 val3, T4 val4)
        :
        Base<T1, T2>(val1, val2),
        value3(val3),
        value4(val4)
    {}

    void printValues()
    {
        Base<T1, T2>::printValues();
        cout << "Child class values:" << endl;
        cout << "Value3: " << value3 << endl;
        cout << "Value4: " << value4 << endl;
    }
};