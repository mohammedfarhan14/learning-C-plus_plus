//recursion in cpp

#include<iostream>
using namespace std;
//for fuboniki sequence
int fubonniki(int n)
{
    if(n<2)
    {
        return 1;
    }
    return fubonniki(n-2) + fubonniki(n-1);
}
int factorial(int n) 
{
    if(n<=1){           // recursion is not always good
        return 1;       // it gives you overhead sometimes
        }           // because it "keeps on calling" the same function again and again for same thing...
                    //iterative is better than recursion!!!
    return n*factorial(n-1);
}
int main()
{
// factorial of a number
int a;
int b; //for fubooniki 
cout<<"enter any number"<<endl;
cin>>a;
cout<<"the factorial of "<<a<<" is "<<factorial(a)<<endl;
cout<<"\n for fuboniki series: "<<endl;
cout<<"enter any value: "<<endl;
cout<<"the term in fuboniki sequence at position "<<b <<"is "<<fubonniki(b);
return 0;
}