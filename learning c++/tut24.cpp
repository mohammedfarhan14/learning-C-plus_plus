// static data members and methods in c++

// static variable is written "outside class".
// Static Local Variables: When a variable is declared as static inside a function,
// it retains its value between function calls.
#include <iostream>
using namespace std;
//
class employee
{
    // private by default
    int id;
    /*count=100; not permitted here */ static int count; // static variable is "count"
public:        // this is public
    void setdata()
    {
        cout << "enter the empid " << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "the id of employee is " << id << " and this is employee number " << count << endl;
    }
    static void getcount()
    {
        // cout<<id; <----this shows error cuz id is not static!!
        cout << "the value of count is: " << count << endl;
    }
};
// the default value of below count variable is 0
// whenever we declare a ststic variable,
// we donot need to initialize it from zero
// by default it is initialized from zero itself
int employee::count;   //!!! imp:- we have to initialize this onceagain outside class
/*int employee::count=100;*/ // this is permitted if u need count from 101
int main()
{
    employee farhan, afrid, zufi; // there are 3 objects for class employee
    farhan.setdata();
    farhan.getdata();
    employee::getcount(); //<----this is direct call with the use of any objects
                          // for eg:- "farhan.getcount();" not used here
    afrid.setdata();
    afrid.getdata();
    employee::getcount();

    zufi.setdata();
    zufi.getdata();
    employee::getcount();

    return 0;
}
// static functions can access only static variables;
// they donot have the permisiion to acccess other member functions and variables