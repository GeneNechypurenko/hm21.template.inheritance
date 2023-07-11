#include <iostream>
#include <string>

//#include "Base.h" - а вот, получается и фишка синтаксиса, о которой вы предупреждали:
//#include "Child.h"  если подключить хедеры, компилятор ругается, что темплейты вызываются несколько раз?
#include "Child2.h"

using namespace std;

int main()
{
    Base<int, double> base(10, 3.14);
    base.printValues();

    cout << endl << "----------------------------------------" << endl;

    Child<int, double, string, bool> child(10, 3.14, "Hello", true);
    child.printValues();

    cout << endl << "----------------------------------------" << endl;

    Child2<int, double, string, bool, char, int> child2(10, 3.14, "Hello", true, 'A', 42);
    child2.printValues();

    cout << endl << "----------------------------------------" << endl;

    return 0;
}
