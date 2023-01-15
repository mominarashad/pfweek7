  
 #include<iostream>
 using namespace std;
 main()
 {
    int h,x,y;
    cout<<"enter the value ";
    cin>>h;
    cout<<"enter the value:";
    cin>>x;
    cout<<"enter the value:";
    cin>>y;
    if ((x>=0 && x<=3*h) && (y==0 || y==h))
    {
       cout << "Border"; 
        return 1;    
    }
     else if ((x>=h && x<=2*h) && (y==0 || y==h || y==2*h || y==3*h || y==4*h))
     {
      cout << "Border"; 
        return 1; 
     }
     else if ((y>=0 && y<=h) && (x==0 || x==h || x==2*h || x==3*h))
     {
       cout << "Border"; 
        return 1; 

     }
     else if ((y>=0 && y<=4*h) && (x==h || x==2*h))
     {
       cout << "Border"; 
        return 1; 

     }
       if ((x>0 && x<3*h) && (y>0 && y<h))
       {
          cout << "Inside"; 
          return 1;

       }
     else if ((x>h && x<2*h) && (y>0 && y<4*h))
     {
       cout << "Inside"; 
       return 1;

     }
     
 }
