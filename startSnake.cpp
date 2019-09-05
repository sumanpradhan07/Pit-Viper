
/******** Suman Pradhan **********/
// Main file

#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include<ctype.h>
#include <ctime>
#include <windows.h>
#include <process.h>
#include "givelife.h"

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

int main()
{

int x ,y,z;
system("color 02");
char ch ;
char t ='\xCD';
char key;
printInstruction();
system("cls");
PlaySound(TEXT("dj.wav"),NULL,SND_FILENAME| SND_ASYNC|SND_LOOP);
system("pause");
load();
length=5;
head.x=25;
head.y=20;
head.direction=RIGHT;
system("color 2a");
Boarder();
Food(); //to generate food coordinates initially
life=5; //number of extra lives
bend[0]=head;
Move(); //initialing initial bend coordinate

return 0;
}

