//call by value and call by reference in c++
#include<iostream>
using namespace std;
void swapreferencevar(int &a, int &b);
int sum(int a, int b)
{
    int c= a+b;
    return c;

}
int swap(int a, int b)// this will not swap anything 
{
    int temp = a; 
    a=b; 
    b=temp;
}

///// this is called call by reference using pointers 
int swappointer(int* a, int* b)// this will not swap anything 
{
    int temp = *a; 
    *a=*b; 
    *b=temp;
}
int main()
{
    int a=4, b=5;
   cout<<"the sum of 4 and 5 is "<<sum(4,5)<<endl; 
   cout<<"before swapping a and b: "<<endl;
   cout<<a, b;
   cout<<"\n after swapping: "<<endl;
   swap(a,b);
   cout<<a, b;
   cout<<"\n by using pointer to swap the values: "<<endl;
   swappointer(&a, &b);
   cout<<a, b;
   cout<<endl<<endl;
   //////by using c++++ reference variables
   cout<<"by using c++ reference variables: "<<endl;
   swapreferencevar(a,b);
   cout<<a,b;
    return 0;
}

//call by reference variables using c++ reference variables
void swapreferencevar(int &a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}