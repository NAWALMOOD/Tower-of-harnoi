#include<iostream>
#include <graphics.h>
#include<iomanip>
using namespace std;
void baseline();      // function declaration to print lines
void phase14(){         //  7th Phase for End At B rod
	getch();              // to get character
	cleardevice();         // this function clear the screen before
	settextstyle(3, 0, 4);     // to use font family,font direction (vertical or horizontal),
	outtextxy(500, 50, "Moving Disc 1 to Rod B"); //  (x direction, y direction and string to print)
	setfillstyle(SOLID_FILL,BLUE);          // this will tell pattern of solid,dotted and color to use
	rectangle(550,500,650,550);         // to make the rectangle (left , top ,right ,bottom)
	floodfill(555,545,15);       // this is used with setfillstyle to fill the inner area color (x ,y ,border)
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(575,450,625,500);
	floodfill(580,495,15);
    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(525,550,675,600);
	floodfill(530,595,15);
	baseline();	          // calling base line function
}
void phase13(){     //moving disk "2" to rod B
	getch();
	cleardevice();
	settextstyle(3, 0, 4);
	outtextxy(500, 50, "Moving Disc 2 to Rod B");
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(575, 500, 625, 550); 
	floodfill(580, 495, 15);
	setfillstyle(SOLID_FILL, WHITE);
	rectangle(275, 600, 325, 550);
	floodfill(280, 595, 15);
	setfillstyle(SOLID_FILL, YELLOW);
    rectangle(550, 550, 650, 600);
	floodfill(555, 595, 15);
   // Calling outline() function
	baseline();	
}
void phase12(){   // moving disk "1" to rod A
	getch();
	cleardevice();
	settextstyle(3, 0, 4);
	outtextxy(500, 50, "Moving Disc 1 to Rod A");
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(825, 600, 975, 550); 
	floodfill(830, 555, 15);
	setfillstyle(SOLID_FILL, WHITE);
	rectangle(275, 600, 325, 550);
	floodfill(280, 595, 15);
	setfillstyle(SOLID_FILL, YELLOW);
    rectangle(550, 550, 650, 600);
	floodfill(555, 595, 15);
	baseline();
}
void phase11(){   // to move the  disk "3" to rod B
		getch();
    cleardevice();
    settextstyle(3, 0, 4);
	outtextxy(500, 50, "Moving Disc 3 to Rod B");
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(850, 550, 950, 600);
	floodfill(855, 595, 15);
	setfillstyle(SOLID_FILL, WHITE);
	rectangle(875, 500, 925, 550);            
	floodfill(880, 545, 15);
    setfillstyle(SOLID_FILL, YELLOW);
    rectangle(550, 550, 650, 600);	
    floodfill(555, 595, 15);  
    baseline();
}
void phase10(){       // Moving  disk "1" to Rod C
	getch();
    cleardevice();
    settextstyle(3, 0, 4);
	outtextxy(500, 50, "Moving Disc 1 to Rod C");
    setfillstyle(SOLID_FILL, BLUE);
	rectangle(850, 550, 950, 600);
	floodfill(855, 595, 15);
	setfillstyle(SOLID_FILL, WHITE);
	rectangle(875, 500, 925, 550);            
	floodfill(880, 495, 15);
    setfillstyle(SOLID_FILL, YELLOW);                  
    rectangle(225, 550, 375, 600);
    floodfill(230, 590, 15);
    baseline();
}
void phase9()  // Moving  disk "2" to rod C 
{
    getch();
    cleardevice();
    settextstyle(3, 0, 4);
    outtextxy(500,50, "Moving Disc 2 to Rod C");
    setfillstyle(SOLID_FILL, BLUE);
	rectangle(850, 550, 950, 600);
	floodfill(855, 545, 15);
	setfillstyle(SOLID_FILL, WHITE);
    rectangle(550, 550, 650, 600);
    floodfill(555, 595, 15);
    setfillstyle(SOLID_FILL,YELLOW );
    rectangle(225, 550, 375, 600);
    floodfill(230, 590, 15);
	baseline();
}
void phase8()      // to move Disk "1" to Rod "B"
{
	getch();
	cleardevice();
	settextstyle(3, 0, 4);
	outtextxy(500, 50, "Moving Disc 1 to Rod C");
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(225, 550, 375, 600);
	floodfill(230, 590, 15);
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(250, 500, 350, 550);
	floodfill(255, 545, 15);
	setfillstyle(SOLID_FILL, WHITE);
	rectangle(550, 550, 650, 600);
	floodfill(555, 545, 15);
	baseline();
}
//            Phases If User's Destination is C
void phase7()        //   to move Disk "1" to Rod C
{
	getch();
	cleardevice();
	settextstyle(3, 0, 4);
	outtextxy(500, 50, "Moving Disc 1 to Rod C");
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(850, 500, 950, 550);
	floodfill(855, 545, 15);
	setfillstyle(SOLID_FILL, WHITE);
	rectangle(875, 450, 925, 500);
	floodfill(880, 495, 15);
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(825, 600, 975, 550);
	floodfill(830, 555, 15);
    baseline();
}
void phase6()       //   to move Disk "2" to Rod C
{
	getch();
	cleardevice();
	settextstyle(3, 0, 4);
	outtextxy(500, 50, "Moving Disc 2 to Rod C");
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(850, 500, 950, 550);
	floodfill(855, 545, 15);
	setfillstyle(SOLID_FILL, WHITE);
	rectangle(275, 600, 325, 550);
	floodfill(280, 595, 15);
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(825, 600, 975, 550);
	floodfill(830, 555, 15);
    baseline();
}
void phase5()         //   to move Disk "1" to Rod A
{
	getch();
	cleardevice();
	settextstyle(3, 0, 4);
	outtextxy(500, 50, "Moving Disc 1 to Rod A");
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(550, 550, 650, 600);
	floodfill(555, 595, 15);
	setfillstyle(SOLID_FILL, WHITE);
	rectangle(275, 600, 325, 550);
	floodfill(280, 595, 15);
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(825, 600, 975, 550);
	floodfill(830, 555, 15);
    baseline();
}
void phase4()                  //   to move Disk "3" to Rod C
{
	getch();
	cleardevice();
	settextstyle(3, 0, 4);
	outtextxy(500, 50, "Moving Disc 3 to Rod C");
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(550, 550, 650, 600);
	floodfill(555, 595, 15);
	setfillstyle(SOLID_FILL, WHITE);
	rectangle(575, 500, 625, 550);
	floodfill(580, 545, 15);
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(825, 600, 975, 550);
	floodfill(830, 555, 15);
	baseline();
}
void phase3()   //   to move Disk "1" to Rod B
{
	getch();
	cleardevice();
	settextstyle(3, 0, 4);
	outtextxy(500, 50, "Moving Disc 1 to Rod B");
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(550, 550, 650, 600);
	floodfill(555, 595, 15);
	setfillstyle(SOLID_FILL, WHITE);
	rectangle(575, 500, 625, 550);
	floodfill(580, 545, 15);
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(225, 550, 375, 600);
	floodfill(230, 590, 15);
    baseline();
}
void phase2()         //   to move Disk "2" to Rod B
{
	getch();
	cleardevice();
	settextstyle(3, 0, 4);
	outtextxy(500, 50, "Moving Disc 2 to Rod B");
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(550, 550, 650, 600);
	floodfill(555, 595, 15);
	setfillstyle(SOLID_FILL, WHITE);
	rectangle(875, 600, 925, 550);
	floodfill(880, 595, 15);
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(225, 550, 375, 600);
	floodfill(230, 590, 15);
    baseline();
}
void phase1()      //   to move Disk "1" to Rod C
{
	getch();
	cleardevice();
	settextstyle(3, 0, 4);
	outtextxy(500, 50, "Moving Disc 1 to Rod C");
	setfillstyle(SOLID_FILL, WHITE);
	rectangle(875, 600, 925, 550);
	floodfill(880, 595, 15);
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(225, 550, 375, 600);
	floodfill(230, 590, 15);
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(250, 500, 350, 550);
	floodfill(255, 545, 15);
	baseline();
}
void start()    // Function for starting point 
{
	cleardevice();
	settextstyle(3, 0, 4);
	outtextxy(500, 50, "Starting From Rod A");
    setfillstyle(SOLID_FILL, YELLOW);
	rectangle(225, 550, 375, 600);
	floodfill(230, 590, 15);
    setfillstyle(SOLID_FILL, BLUE);
	rectangle(250, 500, 350, 550);
	floodfill(255, 545, 15);
	setfillstyle(SOLID_FILL,WHITE);
	rectangle(275, 450, 325, 500);
	floodfill(285, 495, 15);
	baseline();
}
void baseline(){    // funtion to print the base line and rod
//{   setcolor(RED);
    line(100, 600, 1100, 600);  // base line  (function of line to draw the line)
	line(300, 600, 300, 300);// 1st Line
	line(600, 600, 600, 300); // 2nd Line
	line(900, 600, 900, 300);  // 3rd Line
	settextstyle(6, 0, 2);
	outtextxy(290, 620, "Rod A");
	outtextxy(590, 620, "Rod B");
	outtextxy(890, 620, "Rod C");
}
void towerOfHanoi(int n, char src_rod,char destination_rod, char aux_rod)  
{                                                  // function to print the steps solution
    if (n == 1)//test for stop case
    {
        cout << "Disk 1 moved from rod " << src_rod <<" to rod " << destination_rod<<endl;
        return;
    }
    towerOfHanoi(n - 1, src_rod, aux_rod, destination_rod);  //recursive call the function
    cout << "Disk " << n << " moved from rod " << src_rod <<" to rod " << destination_rod << endl;
    towerOfHanoi(n - 1, aux_rod, destination_rod, src_rod);// again recursive call the function
}
int main()   // main function
{   
    int n=3;          // Number of disks
    char destination_rod,aux_rod,ch;
 	cout<<endl<<endl;
    cout<<setw(80)<<"*****************************************************" <<endl;
    cout<<setw(80)<<"                TOWER OF HARNOI GAME                   "<<endl;
    cout<<setw(80)<<"*****************************************************" <<endl;
    cout<<endl<<endl;
    cout<<endl;
   
    cout<<" Which tower Do You want to move Disks? B OR C";
    cin>>destination_rod;// getting destination rod from user
 	aux_rod=(destination_rod=='B' || destination_rod=='b')?'C':'B';// ternary operator to determine the value of auxilory rod  
    if(destination_rod=='C' || destination_rod=='c')    // if user destination is Rod C
	{
	int gd = DETECT, gm;  // Driver Code
	// Initialize of gdriver with
	initgraph(&gd, &gm, "C:\\turboc3\\bgi");
	start();    //  start() function  to show the starting Point
    phase1();
	phase2();
	phase3();
	phase4();
    phase5();
	phase6();
	phase7();
	getch();
	// Close the initialized gdriver
	closegraph();
}
else if(destination_rod=='B'|| destination_rod=='b'){  // if user destination is Rod B
	int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\turboc3\\bgi");
    start();
    phase8();
    phase9();
	phase10();
	phase11();	
	phase12(); 
	phase13();
    phase14();
	getch();
	 closegraph();	
}
	towerOfHanoi(n,'A',destination_rod,aux_rod);
    cout<<setw(100)<<"Presented By SYED  MOAZAM ALI SHAH   \"21-SE-48\" \n";
    return 0;
}
