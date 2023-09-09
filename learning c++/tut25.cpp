//creating an array of objects in c++
#include<iostream>
using namespace std;
class employee
{
    int id;
    int sal;
    
public:
    void setid()
    {
        sal = 22;
        cout<<"enter the id of employee: "<<endl;
        cin>>id;

    }
void getid()
{
    cout<<"the id of this employee is: "<<id<<endl;
}
};
int main()
{
// employee farhan, ayeman, amna, maryam;
// farhan.setid();
// farhan.getid();
employee fb[4]; // this is an array of object employee
for(int i=0; i<4; i++)
{
    fb[i].setid();
    fb[i].getid();
}
 return 0;
}

// //tut25.b

// //complex class 

// #include <iostream>
// using namespace std;

// class complex {
// public:
//     int a, b;

//     void setdata(int v1, int v2) {
//         a = v1;
//         b = v2;
//     }

//     void setDataBySum(int v1, int v2) {
//         a = v1;
//         b = v2;
//     }

//     void addComplex(complex o1, complex o2) {
//         a = o1.a + o2.a;
//         b = o1.b + o2.b;
//     }

//     void print() {
//         cout << "Your complex number is: " << a << "+" << b<<"i" << endl;
//     }
// };

// int main() {
//     complex c1, c2, c3;
    
//     c1.setdata(1, 2);
//     c1.print();

//     c2.setdata(2, 3);
//     c2.print();

//     c3.addComplex(c1, c2);
//     c3.print();

//     return 0;
// }
