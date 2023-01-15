#include<iostream>
using namespace std;
float amount(string month,float numstay);
float amount2(string month,float numstay);
main()
{
string month;
float numstay;
cout<<"enter the month:";
cin>>month;
cout<<"enter the number of stay days:";
cin>>numstay;
float totalprice=amount(month,numstay);
float totalprice2=amount2(month,numstay);


}
float amount(string month,float numstay)
{
    
    float totalamount;
  if((month=="may") || (month=="october"))
  { 
   if(numstay<=7 )
   {
    totalamount= 50*numstay;
    cout<<"price of studio is:"<<totalamount;
   }
   else if (numstay>7 && numstay<=14) 
   {
    totalamount= 50*numstay;
    totalamount=totalamount-(0.5*totalamount);
    cout<<"price of studio is:"<<totalamount;
   }
   else if(numstay>14)
   {
   totalamount=50*numstay;
   totalamount=totalamount-(0.30*totalamount);
   cout<<"price of studio is:"<<totalamount;
   }
   return totalamount;
  }

   if((month=="june") || (month=="september"))
  {
        if (numstay<=14)
        {
        totalamount=75.2*numstay;
        cout<<"price of studio is:"<<totalamount;
        }
        else if(numstay>14)
        {
        totalamount=75.2*numstay;
        totalamount=totalamount-(0.20*totalamount);
        cout<<"price of studio is:"<<totalamount;
        }
        return totalamount;
  }
       if((month=="july") || (month=="august"))
  {
        totalamount=76*numstay;
        cout<<"the price of studio is:"<<totalamount;
        return totalamount;
  }
        return 0;
}

float amount2(string month,float numstay)

{
    float totalamount;
    if((month=="may") || (month=="october"))
  {
    if(numstay<=14)
    {
        totalamount=65*numstay;
        cout<<"the price of apartment is:"<<totalamount;
    }
    if (numstay>14)
    {
        totalamount=65*numstay;
        totalamount=totalamount-(0.10*totalamount);
        cout<<"the price of apartment is:"<<totalamount;
    }
  }
  if((month=="june") || (month=="september"))
{
    if(numstay<=14)
    {
        totalamount=68.70*numstay;
        cout<<"the price of apartment is:"<<totalamount;
    }
    else if (numstay>14)
    {
        totalamount=68.70*numstay;
        totalamount=totalamount-(0.10*totalamount);
        cout<<"the price of apartment is:"<<totalamount;
    }
}
if((month=="july") || (month=="august"))
{  
    if (numstay<=14)
    {
        totalamount=77*numstay;
        totalamount=totalamount-(0.10*totalamount);
    }
   
    if (numstay>14)
    {
        totalamount=77*numstay;
        totalamount=totalamount-(0.10*totalamount);
        cout<<"the price of apartment is:"<<totalamount;
    }
}
    return totalamount;
}



















