#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        void fun() {   cout<<"Base fun\n"; }
       virtual void gun() {   cout<<"Base gun\n"; }
        void sun() {   cout<<"Base sun\n"; }
};

class Derived : public Base
{
    public:
        int X,Y;
        void gun() {   cout<<"Derived gun\n"; }
        void run() {   cout<<"Derived run\n"; }
        void mum() {   cout<<"Derived mum\n"; }

};

int main()
{
    cout<<"Size of base class : "<<sizeof(Base)<<"\n";
    cout<<"Size of derived class : "<<sizeof(Derived)<<"\n";

    return 0;
}