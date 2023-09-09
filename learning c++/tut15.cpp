#include<iostream>
using namespace std;

/// functions and function prototypes in c++ 

/* this is prototyping */ int sum(int a, int b);// gives assurity to compiler that you will find sum value further 
//function prototyping tells the compiler beforehand that that this function is gonna come and uses this values and returns this values
int sum (int a, int b)
{
    int c = a+b;  // if we put this down below main function without prototyping part, then it will show error 
    return c;
}

int main()
{
    int num1, num2; 
    cout<<"enter 1st number: "<<endl;
    cin>>num1;
    cout<<"enter 2nd number: "<<endl;
    cin>>num2;
    cout<<"the sum is: "<<sum(num1,num2) <<endl;
return 0;
}

//int sum(int a, int b); ---> acceptable
//int sum(int a, b); ---> not acceptable 
// int sum(int, int); ---> acceptable 

 // actual and formal parameters 
// formal---> a and b are formal parameters 
// formal parameters a and b will be taking values fraom actual parameters num1 and num2 
//actual----> num1 and num2 are actual parameters 


