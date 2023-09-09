// Structure and Unions and Enums in c++
#include <iostream>
using namespace std;

typedef struct Person
{
    char name[50];
    int age;
    float salary;
} per;

int main()
{
    Person p1;
    
    cout << "Enter Full name: ";
    cin.get(p1.name, 50);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;

    cout<<endl<<endl;

//int main()            //uncomment it while using union and comment the structure part
//{  

    // **************** unions in c++ ********************
union money     // union shares memory among its members
{
    int rupees;
    float dollars;      // in union you can use only one type of data among these 3
    float pounds;       // you just need to specify and use it(only one at a time)
}m1;                     // you cannot use more than one....
    m1.dollars= 1400;
    cout<<m1.dollars<<endl;
    // if u use 2nd one then u will gwt a garbage value
    m1.rupees = 4500;
    cout<<m1.rupees<<endl;    // we can use only one
    
cout<<endl<<endl;
    // *******************enums in c++*******************
  //indexes      //0     //1     //2     //3           
    enum names{afrid, farhan, faiz,  faiz12};
    names n1= afrid ;
    cout<<(n1==2); // this will give you 0 as output cuz n1 value is 1

    cout<<afrid<<endl;
    cout<<farhan<<endl;
    cout<<faiz<<endl;
    cout<<faiz<<endl;

    return 0;
}