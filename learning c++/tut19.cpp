// function overloading in c++
// in function overloading, name is same but work is different (of the function )
// function overloading means function ka naam hai ek aur kaam hai aalaag........
// Think of function overloading like a restaurant menu. Imagine you have a dish called "Pasta," 
//but you can order it with different toppings like "Pasta with Tomato Sauce," "Pasta with Alfredo Sauce,"
// or "Pasta with Pesto."
//In C++, function overloading works similarly. You can have a function called "calculate" 
//with different parameter lists, like "calculate(int a, int b)" and "calculate(double x, double y)."
//When you call "calculate," the compiler knows which version to use based on the type of values you provide,
//just like the restaurant knows which pasta to prepare based on the sauce you choose.

///function overloading is the process of "using the same name" for 2 or more functions!!!!!!!!!!!!!!!!!!!!!!
//------------------------------------------------------------------------------------------------------------

//Think about a toy box where you have different shapes to put through holes: circles, squares, and triangles. Each shape goes through its own matching hole. 
//Function overloading is similar. You can have a single function name, but it can work differently based on the type of information you give it.
// Just like you match shapes to holes, the program matches the right function based on the kind of data you provide.
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int sum(int a, int b)
{
    return (a+b);
}
int sum(int a, int b , int c)
{
    return (a+b+c);
}
// overloaded function example
int volume(double r, int h)
{
    return (3.14*r*r*h); //calculate the volume of cylinder
}
int volume(int a)
{
    return (a*a*a); //volume of cube
}
int volume(int l, int b, int h)
{
    return (l*b*h);//volume of rectangle 
}
int main()
{
cout<<"the sum of 3 and 6 is "<<sum(3, 6)<<endl;
cout<<"the sum of 3, 6, and 9 is "<<sum(3, 6, 9)<<endl;
cout<<"the volume of rectangle of 3, 6, and 9 is "<<volume(3, 6, 9)<<endl;
cout<<"the volume of cube of 9 is "<<volume(9)<<endl;
cout<<"the volume of cylinder of 6 and 9 is "<<volume( 6, 9)<<endl;
return 0;
}

// just by passing appropriate parameters we can overload the function.. its easy..so i thought..