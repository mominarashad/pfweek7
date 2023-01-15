#include<iostream>
using namespace std;
string zodiacsign(int day,string month);
main()
{
int day;
string month;
cout<<"enter the day:";
cin>>day;
cout<<"enter the month:";
cin>>month;
string zodiacsignis=zodiacsign(day,month);
cout<<"the sign is.."<<zodiacsignis;


}
string zodiacsign(int day,string month)
{ 
    string sign;
    if((day>=21 && month=="march") || (day<=19 && month=="april"))
   { sign="aries";
                  }
    if((day>=20 && month=="april") || (day<=20 && month=="may"))
   { sign="taurus";
                  }              
   if((day>=21 && month=="may") || (day<=20 && month=="june"))
   { sign="gemini";
                  }
    if((day>=21 && month=="june") || (day<=22 && month=="july"))
   { sign="cancer";
                  } 
   if((day>=23 && month=="july") || (day<=22 && month=="august"))
   { sign="leo";
                  }   
    if((day>=23 && month=="august") || (day<=22 && month=="september"))
   { sign="virgo";
                  }   
    if((day>=23 && month=="september") || (day<=22 && month=="october"))
   { sign="libra";
                  }  
   if((day>=23 && month=="october") || (day<=22 && month=="november"))
   { sign="scorpio";
                  } 
    if((day>=22 && month=="november") || (day<=21 && month=="december"))
   { sign="sagittarius";
   }
   if((day>=22 && month=="december") || (day<=19 && month=="january"))
   { sign="capricon";
                  }
    if((day>=20 && month=="january") || (day<=18 && month=="february"))
   { sign="aquarius";
                  }                           
    if((day>=19 && month=="february") || (day<=20 && month=="march"))
   { sign="pisces";
                  }     
    return sign;                                                                                                 
}