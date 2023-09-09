//classes in c++
//class is useful than structures because there is more security and data hiding
#include<iostream>
using namespace std;
class employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setdata( int a1, int b1, int c1);//decleration (will get it in further program trust me compiler) we tell this to compiler basically 
        void getdata()
        {
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
        }
};
//this is the method when u declare any function outside(syntax)
void employee :: setdata(int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
// creaing object for employee (i,e: farhan is object)
employee farhan;
farhan.setdata(1, 2, 3); //here a, b, c are private and we cannot directly access private members like, { farhan.a=21 (we cant do this) }
farhan.d=22;  // "d" and "e" are public, so we can access them directly 
farhan.e=51; // like this { farhan.d=156; }
//farhan.a=123; //uncomment and run the code, it will show error cuz, "A" is private....
farhan.getdata();
return 0;
}

/*---------------------------------------------------------------------------
just a code done by me---->
----------------------------------
#include<iostream>
using namespace std;
class employee
{
private:
int empsal;
public:
int empid;
void setdata(int sal);
void getdata()
{
    cout<<"the emp id is "<<empid<<endl;
    cout<<"the employee salaray is "<<empsal<<endl;
}
};
void employee::setdata(int sal)
{
    empsal =2000000;
}
int main()
{
employee emp;
emp.empid=410;
emp.setdata(123); //here, regardless of passing 123, we have set the sal
emp.getdata(); //to a fixed value 2000000 so it doesnt matter what we pass
return 0;      //it will still be 2000000
}
*/