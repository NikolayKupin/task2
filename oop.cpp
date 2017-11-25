#include "oop.h"

Base::Base
{
     virtual void func() const { cout << "Function func() of class Base\n"; }
}

Child::Base
{
    void func() const { cout << "Function func() of class Child\n"; }
}

void Function(const Base &obj)
{
    cout << "* Call method func() for object obj" << endl;
    obj.func();
}
