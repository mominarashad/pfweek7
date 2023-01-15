#include<iostream>
using namespace std;
void time(int sthours,int stmin,int arrivalhour,int arrivalmin);
main()
{
int sthours;
int stmin;
int arrivalhour;
int arrivalmin;
cout<<"enter the starting time in hours:";
cin>>sthours;
cout<<"enter the starting time in min:";
cin>>stmin;
cout<<"enter the arrival time in hours:";
cin>>arrivalhour;
cout<<"enter the arrival time in min:";
cin>>arrivalmin;
time(sthours,stmin,arrivalhour,arrivalmin);

}
void time(int sthours,int stmin,int arrivalhour,int arrivalmin)
{

   int timebefore;
   int totalstartingmin;
   int totalarrivalmin;
   totalstartingmin=(60*sthours)+stmin;
   totalarrivalmin=(60*arrivalhour)+arrivalmin;
    timebefore=totalstartingmin-30;

    int output;
    int min; 
    int hours;

   if(totalarrivalmin>totalstartingmin)
{
   cout<<"late";
   output=totalarrivalmin-totalstartingmin;
   min= output%60;
   hours=output/60;
   cout<<hours<<":"<<min<<"time after the start:";
   
}
  else if(totalarrivalmin>=timebefore && totalarrivalmin<totalstartingmin)
{
   cout<<"on time";
   output=totalstartingmin-totalarrivalmin;
   min=output%60;
   hours=output/60;
   cout<<hours<<":"<<min<<"time before the start:";

}
  else if(totalarrivalmin<timebefore)
{
  cout<<"early";
  output=totalstartingmin-totalarrivalmin;
  min=output%60;
  hours=output/60;
  cout<<hours<<":"<<min<<"time before the start:";

}

}


