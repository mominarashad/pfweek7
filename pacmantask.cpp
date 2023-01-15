#include<iostream>
#include<windows.h>
using namespace std;

void printmaze();
void gotoxy(int x,int y);
void erase(int x,int y);
void erase2(int gx,int gy);
void printpacman(int x,int y);
void printghost(int gx,int  gy);
char getcharatxy(short int x,short int y);

main()
{
 int x=4;
 int y=4;
 bool gameRunning=true;
 
 system("cls");
 printmaze();
 printpacman( x, y);

 while(gameRunning) 
{
 if(GetAsyncKeyState(VK_LEFT))
{ 
  char nextlocation=getcharatxy(x-1,y);
  if (nextlocation==' ')
    {
      erase(x,y);
      x=x-1;
      printpacman(x,y);
    }
}
  if(GetAsyncKeyState(VK_RIGHT))
 {
  char nextlocation=getcharatxy(x+1,y);
  if (nextlocation==' ')
    {
      erase(x,y);
      x=x+1;
      printpacman(x,y);
    }
  }
  if(GetAsyncKeyState(VK_UP))
 {
  char nextlocation=getcharatxy(x,y-1);
  if (nextlocation==' ')
    {
      erase(x,y);
      y=y-1;
      printpacman(x,y);
    } 
  }
  if(GetAsyncKeyState(VK_LEFT))
 {
  char nextlocation=getcharatxy(x,y+1);
  if (nextlocation==' ')
    {
      erase(x,y);
      y=y+1;
      printpacman(x,y);
    }
  }
   if(GetAsyncKeyState(VK_ESCAPE))
   {
     gameRunning=false;
   }
   Sleep(200);
  }
  int gx=5;
  int gy=5;
  string direction ="right";
  char previousChar =' ';
  system("cls");
  printghost(gx,gy);
  while(true)
  { 
    Sleep(100);
    if(direction=="right")
    {
        char nextlocation=getcharatxy(gx+1,gy);
        if(nextlocation==" % " || nextlocation==" |%| ")
        {
            direction="left";
        }
        else if (nextlocation==' ' || nextlocation=='.')
        {
          erase2(gx,gy,previousChar);
          gx=gx+1;
          previousChar=nextlocation;
          printghost(gx,gy);
        }
    }
    if(direction=="left")
    {
        char nextlocation=getcharatxy(gx-1,gy);
        if(nextlocation==" % " || nextlocation==" |%| ")
        {
            direction="right";
        }
        else if (nextlocation==' ' || nextlocation=='.')
        {
           erase2(gx,gy,previousChar);
          gx=gx-1;
          previousChar=nextlocation;
          printghost(gx,gy);
        }
    }
    if(direction=="up")
    {
        char nextlocation=getcharatxy(gx,gy-1);
        if(nextlocation==" % " || nextlocation==" |%| ")
        {
            direction="down";
        }
        else if (nextlocation==' ' || nextlocation=='.')
        {
           erase2(gx,gy,previousChar);
          gy=gy-1;
          previousChar=nextlocation;
          printghost(gx,gy);
        }
    }
    if(direction=="down")
    {
        char nextlocation=getcharatxy(gx,gy+1);
        if(nextlocation=="  % " || nextlocation==" |%| ")
        {
            direction="up";
        }
        else if (nextlocation==' ' || nextlocation=='.')
        {
           erase2(gx,gy,previousChar);
          gy=gy+1;
          previousChar=nextlocation;
          printghost(gx,gy);
        }
    }
  }
  }

void printmaze()
{
cout<< " #############################################################################  "<<endl;
cout<< " #...........................................................         .....  #  "<<endl; 
cout<< " #..  %%%%%%%%%%%%%%      ...      %%%%%%%%%%%%%        |%|..         %%%%   #  "<<endl;                                                             
cout<< " #..      |%|    |%|   |%|...      |%|       |%|        |%|..         |%|    #  "<<endl;
cout<< " #..      |%|    |%|   |%|...      |%|       |%|        |%|..         |%|    #  "<<endl; 
cout<< " #..      %%%%%%%%%%.. |%|...      %%%%%%%%%%%%%     |%|   ..         %%%%.  #  "<<endl;                                    
cout<< " #..      |%|       .. |%|...      .............     |%|   ..             .  #  "<<endl;
cout<< " #..      %%%%%%%%%%.. |%|...      %%%%%%%%%%%       |%|   ..         %%%%.  #  "<<endl;
cout<< " #..               |%|.            |%|......               ..          |%|.  #  "<<endl;                               
cout<< " #..|%|  ......... |%|.            |%|......|%|            ..          |%|.  #  "<<endl;
cout<< " #..|%|  |%|%%%|%|.|%|.   |%|         ......|%|             .|%|       |%|.  #  "<<endl;
cout<< " #..|%|  |%|   |%|..       %%%%%%%%%%  .....|%|            ..|%|.            #  "<<endl;
cout<< " #..|%|  |%|   |%|..            ...|%|     %%%%            ..|%|.            #  "<<endl;
cout<< " #..|%|               .         ...|%|                 |%| ..|%|.            #  "<<endl;
cout<< " #..|%|   %%%%%%%%%%%%          ...|%|%%%%%%%%%%%%%    |%| ..|%|%%%%%%%%%%   #  "<<endl;
cout<< " #.................................................    |%| .............     #  "<<endl;
cout<< " #.................................................             ........     #  "<<endl;
cout<< " #..|%|    |%|    |%|..     %%%%%%%%%%%   ........|%|  |%|  ..|%|.           #  "<<endl;
cout<< " #..|%|    |%|    |%|..          ...|%|        %%%%%%  |%|  ..|%|.           #  "<<endl;
cout<< " #..|%|              .           ...|%|                |%|  ..|%|.           #  "<<endl;
cout<< " #..|%|    %%%%%%%%%%%%%%%%      ...|%|%%%%%%%%%%      |%|  ..|%|%%%%%%%%%%  #  "<<endl;
cout<< " #..................................................   |%|  ..............   #  "<<endl;
cout<< " #..................................................        ............     #  "<<endl;
cout<< " #############################################################################  "<<endl;
 }
void gotoxy (int x,int y)
{  
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
} 
void erase(int x,int y)
{
  gotoxy(x,y);
  cout<<" ";
}
void erase2(int gx,int gy)
{
  gotoxy(gx,gy);
  cout<<" ";
}
void printpacman(int x,int y)
{
 gotoxy(x,y);
 cout<<"P";
}
void printghost(int x,int y)
{
gotoxy(x,y);
cout<<"G";

}
char getcharAtxy(short int x,short int y)
{
  CHAR_INFO ci;
  COORD xy = {0,0};
  SMALL_RECT rect = {x , y , x , y};
  COORD coordBufsize;
  coordBufsize.X = 1;
  coordBufsize.Y = 1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufsize, xy , &rect) ? ci.Char.AsciiChar : ' ';
}
  
