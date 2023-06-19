#include<iostream>
using namespace std;

class Base
{
    public:
         int A,B;

         Base()
         {
            cout<<"Inside Base constructor\n";
         }
        ~Base()
        {
            cout<<"Inside Base destructor\n";
        }
        void gun()
        {
            cout<<"Inside gun of Derived\n";
        }
};

class Derived : public Base
{
    public:
        int X,Y:

        Derived()
        {
            cout<<"Inside derived Constructor\n";
        }
        ~Derived()
        {
            cout<<"Inside derived destructor\n";
        }
        void gun()
        {
            cout<<"Inside gun of Derived\n"
        }
};

int main()
{
    Derived * ptr = NULL;

    ptr = new Derived;

    return 0;
}