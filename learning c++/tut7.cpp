#include<iostream>
using namespace std;
int c = 355;//global variable
int main()
{       // ******************built in data types****************
    int a, b, sum; // inside main is local variable
    int c = 45;
    cout<<"enter the value of a: "<<endl;
    cin>>a;
    cout<<"enter the value of b: "<<endl;
    cin>>b;
    sum= a+b;
    cout<<"the sum of a+b is: "<<sum<<endl;
    cout<<"the value of local variable c is: "<<c<<endl;
    cout<<"the value of global variable c is by using :: operator: "<<::c<<endl; //::scope resolution operator
    cout<<endl<<endl;
    //we use :: scope resolution operator to access global variables and more
    
    //*************float double literals******************

    float d=34.4f; //f here is to say that the number is float
    long double e= 34.4l;//l here is to say the the number is long double
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;
    
    //by default in c++ decimal numbers are double

    cout<<endl<<endl;
    //******************refrence variables******************

    // Rohan----> Monty---->rohu----->Dangerous Coder
    //refrence variables means same name for different variables
    // for refrence variables we use "&"
    float x=455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    cout<<endl<<endl;

    //**************Typecasting******************

    int g = 45;
    float h= 45.46;
    cout<<"the value of g is "<<float(g)<<endl;
    cout<<"the value of h is "<<int(h)<<endl;
    // float(a), int(b) this is how we typecast in c++
    





    
    
    return 0;


}