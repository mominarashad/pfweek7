#include<iostream>
using namespace std;
void grade(int totalmarks,string name);
main()
{
string name;
int sub1;
int sub2;
int sub3;
int sub4;
int sub5;
cout<<"enter your name:";
cin>>name;
cout<<"enter the subject marks:";
cin>>sub1;
cout<<"enter the subject marks:";
cin>>sub2;
cout<<"enter the subject marks:";
cin>>sub3;
cout<<"enter the subject marks:";
cin>>sub4;
cout<<"enter the subject marks:";
cin>>sub5;
int totalmarks;
totalmarks=sub1+sub2+sub3+sub4+sub5;
float percentage;
{percentage=(totalmarks*100)/500;
cout<<"your percentage is:"<<percentage;}
grade(totalmarks,name);



}
void grade(int totalmarks,string name)
{
  float percentage;
  string gradeawarded;

 if(percentage>=90 && percentage<=100)
   {
    cout<<"grade is A+"<<gradeawarded;
   }
 if(percentage>=81 && percentage<=90)
    {
    cout<<"grade is A"<<gradeawarded;
   }
 if(percentage>71 && percentage<=80)
  {
    cout<<"grade is B+"<<gradeawarded;
   }
 if(percentage>=61 && percentage<=70)
   {
    cout<<"grade is B"<<gradeawarded;
   }
 if(percentage>=50 && percentage<=60)
   {
    cout<<"grade is C"<<gradeawarded;
   }
}



