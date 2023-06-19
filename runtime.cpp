#include<iostream>
using namespace std;

class Base
{
    public:
       int A,B;              //Access specifier

       void fun()             //Function defination
       {
        cout<<"Base fun\n";
       }
       void gun(int i)        //function defination
       {
        cout<<"Base gun eith one integer\n";
       }
       void gun(int i, int j)      //overloaded function defination
       {
        cout<<"Base gun with 2 integer\n";
       }

};

class Derived : public Base
{
    public:
        int X,Y;
        void sun()                    //fuction defination
        {
            cout<<"Derived sun\n";    
        }
        void fun()                   //fuction redefination
        {
            cout<<"Derived fun\n";
        }


};
int main()
{
    Derived dobj;
    dobj.fun();      //CALL
    dobj.gun(11);    //CALL
    dobj.gun(11,21); //CALL
    dobj.sun();     //CALL



    return 0;
}