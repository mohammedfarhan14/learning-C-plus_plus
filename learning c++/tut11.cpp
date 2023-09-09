//break and continue statements in c++
// break completely stops loop 
// continue skips the current iteration and continues with the remaining operations 
#include<iostream>
using namespace std;
int main()
{
    cout<<endl<<endl;
    cout<<"This is an example of break loop"<<endl;
    for(int i=1; i<=7; i++)
    {
        cout<<i<<endl;

        if(i==4)
        {
            break; 
    
        }
    
    }
    cout<<endl<<endl;
    // this is for continue loop
    cout<<"This is an example for continue loop"<<endl<<endl;
    
    for(int i=1; i<=7; i++)
    {
        if(i==4)
        {
            continue; 
    
        }
        cout<<i<<endl;// remember where we are executing <<cout<< statement 
        
    }




return 0;
}
