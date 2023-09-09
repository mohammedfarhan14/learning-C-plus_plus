#include<iostream>
using namespace std;
int main()
{   int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
    // if((age<18) && (age>1))
    // {
    //     cout<<"you cannot come to my party"<<endl;
    // }
    // else if(age <1)
    // {
    //     cout<<"you have'nt been born yet....!!"<<endl;
    // }
    // else if(age==18)
    // {
    //     cout<<"you should have a pass to enter my party"<<endl;
    // }
    // else{
    //     cout<<"you can come to my party"<<endl;
    // }

    //**************switch case statement*******************
    switch(age)
    {
        case 18:
        cout<<"you ate 18"<<endl;
        break;

        case 22:
        cout<<"you are 22"<<endl;
        break;

        case 2: 
        cout<<"you are 2"<<endl;
        break; 
        
        default:
        cout<<"no special cases"<<endl;
        break;


    }
 return 0;
}