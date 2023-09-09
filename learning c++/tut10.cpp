#include<iostream>
using namespace std;
int i=1, n=40;
int main()
{
    /* loops in c++
    there are 3 types of loops in c++
    1. For loop
    2. While loop
    3. Do-While loop
    */
   int n =100, i;
   for (i=1; i<=n; i++)
   {
        cout<<i<<endl;
   }
    cout<<endl<<endl;
    //*************While Loop in c++****************
    //printing 1 to 40 using while loop;

    cout<<"printing numbers 1 to 40 using while loop and scope resolution operator "<<endl<<endl;

    while (::i<=::n)
    {
       cout<<::i<<endl;
       ::i++;
    }
    cout<<endl<<endl;
    //*************Do-While Loop in c++****************
    //$$ Do-while loop will execute once atleast, regardless of the condition...

    cout<<"demonstration of Do-While loop"<<endl<<endl;
     int x=1;
     do{
        cout<<x<<endl; 
        x++;
     } while(false);// please keep this false cuz it's an infinite loop....

     cout<<endl<<endl; 
     cout<<"Multliplication tabel using do while loop"<<endl<<endl; 

     int z= 7;
     int y=1;
     do{
        cout<<z<<"X"<<y<<"="<<z*y<<endl;
        y++;
     }while(y<=10);
    return 0;

}