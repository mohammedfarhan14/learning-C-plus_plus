#include<iostream>
using namespace std;
int main()
{
//pointers in c++ -->pointer is a variable that holds the address of another variable 
int a =3;
int *b= &a;
// & --->(Address of) address of operator
cout<<"the address of a is "<<&a<<endl;
cout<<"the address of b is "<<b<<endl;
cout <<endl<<endl;

// * --->(Value at) deference operator 

//here we have used * and only then we aqre able to access the value that pointer 'b' is holding
cout<<"the value at address b is "<<*b<<endl;
cout <<endl<<endl;

// pointer to pointer variable in c++

int **c = &b;
cout<<"the value that b holds is "<<*b<<endl;
cout<<"the address of b is "<<&b<<endl;
cout<<endl;
cout<<"the address of c is "<<*c<<endl;
cout<<"the value that **c pointer holds is "<<**c<<endl;

return 0;
}