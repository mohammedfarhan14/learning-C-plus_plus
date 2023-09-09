////inline functions and arguments in c++ and "const" keyword

#include<iostream>
using namespace std;
inline int product(int a,int b)
{
    return (a*b+1);
}
int main()
{
int a,b;
cout<<"enter the value of a and b: "<<endl;
cin>>a>>b;
cout<<"the product of a and b is: "<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
return 0;
}

//*********static variables in c++*************
/*

#include<iostream>
using namespace std;
int product (int a, int b)
{
    static int c =2;
    c=c+1;// remove this line and then run the code you will understand better
    return a*b+c;
}
int main()
{
int a, b;
cout<<"enter the values of a and b: "<<endl;
cin>>a>>b;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
return 0;
    }
*/

