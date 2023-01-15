#include<iostream>
using namespace std;
 float price(string fruit,string day,float amount);
main()
{
    string fruit,day;
    float amount;
    cout<<"enter the fruit:";
    cin>>fruit;
    cout<<"enter the day:";
    cin>>day;
    cout<<"enter the amount:";
    cin>>amount;
    float totalamount=price(fruit,day,amount);
    cout<<"the total amount is.."<<totalamount<<endl;


}
float price(string fruit,string day,float amount)
{
    float totalprice;
   if((day=="monday") || (day=="tuesday") || (day=="wednesday") || (day=="thursday") || (day=="friday"))
  {
    if(fruit=="banana")
    {
        totalprice=2.50*amount;
    }
    else if(fruit=="apple")
    {
        totalprice=1.20*amount;
    }
    else if(fruit=="orange")
    {
        totalprice=0.85*amount;
    }
    else if(fruit=="grapefruit")
    {
        totalprice=1.45*amount;
    }
    else if(fruit=="kiwi")
    {
        totalprice=2.70*amount;
    }
    else if(fruit=="pineapple")
    {
        totalprice=5.50*amount;
    }
    else if(fruit=="grapes")
    {
        totalprice=3.85*amount;
    }
  }
  
  if((day=="sunday") || (day=="saturday"))
  {

     if(fruit=="banana")
    {
        totalprice=2.70*amount;
    }
    else if(fruit=="apple")
    {
        totalprice=1.25*amount;
    }
    else if(fruit=="orange")
    {
        totalprice=0.90*amount;
    }
    else if(fruit=="grapefruit")
    {
        totalprice=1.6*amount;
    }
    else if(fruit=="kiwi")
    {
        totalprice=3.00*amount;}
     else if(fruit=="pineapple")
    {
        totalprice=5.60*amount;
    }
    else if(fruit=="grapes")
    {
        totalprice=4.20*amount;
    }   
  }
  return totalprice;
}