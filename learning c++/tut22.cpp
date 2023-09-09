

//**************Nesting of member functions in c++ *******************

// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> are structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are already typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

#include <iostream>
#include <string>
using namespace std;
class binary
{
    //private by default
    string s;

public:
    void read(void);
    void chk_bin();
    void ones_complement();
};
void binary::read(void) //not required to give void argument inside 
{
cout<<"enter a binary number: "<<endl;
cin>>s;
}
 void binary::chk_bin()
 {
    for(int i=0; i<s.length();i++)
    {
 /*must put it in '0' & '1' */ if(s.at(i)!='0' && s.at(i)!='1')   //s.at(i, i= at i'th index ) is a string function of headerfile string
        {// if not in inverted comas '' , it will show error(0 & 1)
         cout<<"incorrect binary formatt!, please check the formatt!"<<endl;
            exit(0);
        }
    }
 }
void binary::ones_complement()
{
     chk_bin();//if u run this here then this is nesting of member functions
    for (int i=0; i<s.length(); i++) 
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
    else
    s.at(i)='0';
    }
    cout<<"ones complement is "<<s<<endl;
}
int main()
{
    binary b; // b is the member of class binary// i am creating it here in this line
    b.read(); // reading binary number 
    // b.chk_bin();// uncomment this for non nesting member function and comment upside, that above function
    b.ones_complement();
    return 0;
}
// using :: (scoperesolution) we can access global veriables or member functions that is out of scope...