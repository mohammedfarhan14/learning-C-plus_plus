// memory allocation using arrays inside classes in c++
#include<iostream>
using namespace std;
class shop
{
    int itemid[50];
    int itemprice[50];
    int counter;
    public:
    void initcounter()
    {
        counter=0;
    }
    void setprice();
     void displayprice();

};
void shop::setprice()
{
    cout<<"enter id of ur item number "<<counter + 1<<endl;
    cin>>itemid[counter];
    cout<<"enter price for ur item  "<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop::displayprice()
{
    for(int i=0; i<counter; i++)
    {
        cout<<"the price of item with id "<<itemid[i]<<" is "<<itemprice[i]<<endl;//[i] is used here cuz this is an array
    }
}
int main()
{
    int n;
    cout<<"enter the total number of items: "<<endl;
    cin>>n;
    shop market; //"market" is the object of class "shop"
    market.initcounter();
    for(int i=0; i<n; i++)
{
    market.setprice();
    market.displayprice();
}

return 0;
}