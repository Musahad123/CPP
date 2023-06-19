#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;

};

class Derived : public Base
{
    public:
        int X,y;
};

int main()
{
    Base * bp = NULL;
    Derived *dp = NULL;

    Base bobj;
    Derived dobj;

    bp = &bobj;        //No Casting   A
    dp = &dobj;       //No Casting   A
    bp = &dobj;      // Up Casting  A
   // dp = &bobj;   //Down Casting NA

    return 0;
}