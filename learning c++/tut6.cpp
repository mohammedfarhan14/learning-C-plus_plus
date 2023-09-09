//there are two types of header files 
// 1. is system header files--- it comes with compiler 
// 2. is user defined header files--- its written by the programmer 
#include<iostream>
using namespace std;
int main()
{
    int a=4, b=5;
    cout<<"operators in c++ "<<endl;
    cout<<"the following are the types of operators in c++ "<<endl;

    // 1. arethmetic operators
    
    cout<<"The arethmetic operators"<<endl<<endl;
    cout<<"a=4, b=5"<<endl;
    cout<<" the value of a+b is "<< a+b<<endl;
    cout<<" the value of a-b is "<< a-b<<endl;
    cout<<" the value of a*b is "<< a*b<<endl;
    cout<<" the value of a/b is "<< a/b<<endl;
    cout<<" the value of a%b is "<< a%b<<endl;
    cout<<" the value of a++ is "<< a++<<endl;//a++ is first print a, then increment the value of a
    cout<<" the value of a-- is "<< a--<<endl;//a-- is first print a, then decrement the value of a
    cout<<" the value of --a is "<< --a<<endl;//--a is first decrement the value of a, then print it(A)
    cout<<" the value of ++a is "<< ++b<<endl;//++a is first increment the value of a, then print (A)
    
    // 2. assignment operators--> used to assign valyes to variables
    // int a= b=   (==)  is assign operator
    cout<<endl; 
    // 3. comparison operators in c++
    cout<<"The comparison operators :"<<endl<<endl;

    cout<<"the value of a==b is "<<(a==b)<<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
    
    cout<<endl<<endl;
    // 4. logical operators in c++
    cout<<"The logical operators :"<<endl<<endl;

    cout<<"the value of this logic ((a==b) && (a<b)) is "<<((a==b)&& (a<b))<<endl;
    cout<<"the value of this logic ((a==b) || (a<b)) is "<<((a==b)|| (a<b))<<endl;
    cout<<"the value of this logic !(a==b) is "<<!(a==b)<<endl;
    



    


    return 0;
}


