// friend functions in c++

//properties of friend functions:---
/*--------------------------------------------------------
1.) friend function is not in the scope of class.
2.) since it is not in the scope of the class, it cannot be called from the object of
that class. eg:- (c1.sumcomplex() == invalid).
3.) can be invoked without the help of any objects.
4.) usually contains the objects as arguments.
// *///-------------------------------------------------------------

// complex number example:
//        1 + 5i
//        5 + 7i
//       ---------
//  sum = 6 + 12i <--- result
//  -----------------------------------
#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumcomplex(complex o1, complex o2);
    //the above line means that non member - sum complex function is allowed 
    //to access the private data of complex class...
    void printnumber()
    {
        cout<<"your number is: " << a << " + " << b << "i" <<endl;
    } 
};
  complex sumcomplex(complex o1, complex o2){
        complex o3;
        o3.setnumber((o1.a + o2.a),(o1.b + o2.b));
        return o3;
    }
int main()
{
    complex c1, c2, sum;
    c1.setnumber(4, 7);
    c2.setnumber(2, 12);
    c1.printnumber();
    c2.printnumber();
    sum = sumcomplex(c1, c2);
    sum.printnumber();
    return 0;
}