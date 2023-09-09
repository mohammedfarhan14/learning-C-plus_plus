#include<iostream>
using namespace std;
int main()
{
// Arrays in c++
int i=0, marks[5]={20, 14, 16, 13, 17 };
for(i=0; i<5; i++)
{
    cout<<marks[i]<<endl;

}
cout<<endl<<endl;
//using while loop
i=0;
while(i<5)
{
    cout<<marks[i]<<endl;
    i++;
}
cout<<endl<<endl;
// using do-while loop
i=0;
do{
   cout<<marks[i]<<endl;
    i++;
} while(i<=4);

// using arrays and pointers in c++

/// pointer arethmetic formula is:
/////address new= address current+i * sizeof(datatype)

int* p = marks;
cout<<"the value of marks[0] or (*p) indices is: "<<*p<<endl;
cout<<"the value of marks[1] or (*p+1) indices is: "<<*p+1<<endl;
cout<<"the value of marks[2] or (*p+2) indices is: "<<*p+2<<endl;
cout<<"the value of marks[3] or (*p+3) indices is: "<<*p+3<<endl;
cout<<"the value of marks[4] or (*p+4) indices is: "<<*p+4<<endl;

return 0;

}
