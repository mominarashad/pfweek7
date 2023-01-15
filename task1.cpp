#include<iostream>
using namespace std;
string activity(string temp,string humidity);
main()
{
string temp;
string humidity;
cout<<"enter the condition of temperature:";
cin>>temp;
cout<<"enter the condition of humidity:";
cin>>humidity;
string condition=activity(temp,humidity);
cout<<"the result is.."<<condition;

}
string activity(string temp,string humidity)
{
string result;
if(temp=="warm" && humidity=="dry")
{
result="play tennis";
}
if(temp=="warm" && humidity=="humid")
{
result="swim";
}
if(temp=="cold" && humidity=="dry")
{
result="play basketball";
}
if(temp=="cold" && humidity=="humid")
{
result="watch tv";
}
return result;
}