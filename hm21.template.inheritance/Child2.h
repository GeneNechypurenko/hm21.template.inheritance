#include "Child.h"

template 
<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>

class Child2 : public Child<T1, T2, T3, T4>
{
protected:
    T5 value5;
    T6 value6;

public:
    Child2(T1 val1, T2 val2, T3 val3, T4 val4, T5 val5, T6 val6)
        :
        Child<T1, T2, T3, T4>(val1, val2, val3, val4),
        value5(val5),
        value6(val6)
    {}

    void printValues()
    {
        Child<T1, T2, T3, T4>::printValues();
        cout << "Child2 class values:" << endl;
        cout << "Value5: " << value5 << endl;
        cout << "Value6: " << value6 << endl;
    }
};