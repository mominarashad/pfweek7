#include<iostream>
using namespace std;
float bill(char customer,char servicecode,float minutes);
main()
{
char customer;
char servicecode;
float minutes;
cout<<"enter the customer code:";
cin>>customer;
cout<<"enter the service code:";
cin>>servicecode;
cout<<"enter the minutes:";
cin>>minutes;
float totalbill=bill(customer,servicecode,minutes);
cout<<"the total bill is.."<<totalbill<<endl;

}
float bill(char customer,char servicecode,float minutes)
{
    float rates;
  if(customer=='R' && minutes<=50)
  {
    rates=0.00*minutes+0.10;
  }
  if(customer=='R' && minutes>50)
  {
    rates=0.20*minutes+0.10;
  }
  if(customer=='P' && minutes<=75 && servicecode=='D')
  {
    rates=0.00*minutes+25;
  }
  if(customer=='P' && minutes>75 && servicecode=='D')
  {
    rates=0.10*minutes+25;
  }
  if(customer=='P' && minutes<=100 && servicecode=='N')
  {
    rates=0.00*minutes+25;
  }
  if(customer=='P' && minutes>100 && servicecode=='N')
  {
    rates=0.05*minutes+25;
  }
  return rates;
}  


















