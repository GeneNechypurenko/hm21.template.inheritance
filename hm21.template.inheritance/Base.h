#include <iostream>
#include <string>

using namespace std;

template
<typename T1, typename T2>

class Base
{
protected:
    T1 value1;
    T2 value2;

public:
    Base(T1 val1, T2 val2)
        :
        value1(val1),
        value2(val2)
    {}

    void printValues()
    {
        cout << "Base class values:" << endl;
        cout << "Value1: " << value1 << endl;
        cout << "Value2: " << value2 << endl;
    }
};