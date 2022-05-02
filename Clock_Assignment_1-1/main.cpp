# include "iGraphics.h"
#include<stdio.h>
#include<Windows.h>
#include<math.h>
#define PI 3.1416
int a;
float hour,minute,second;
float hourangle,minangle,secangle;
void iDraw()
{
if(a==1){
SYSTEMTIME str_t;
GetSystemTime(&str_t);
hour=str_t.wHour;
hour+=6;
minute=str_t.wMinute;
second=str_t.wSecond;
if(hour<=12)hourangle=(hour*(PI/6)+(PI/2))+((minute/12)*(PI/30));
if(hour>12) hourangle=((hour-12)*(PI/6)+(PI/2))+((minute/12)*(PI/30));
minangle=(minute*(PI/30)-(PI/2));
secangle=second*(PI/30)-(PI/2);
iClear();
iSetColor(255,255,255);
iCircle(300,200,150,10000);
iText(282,330,"12",GLUT_BITMAP_TIMES_ROMAN_24);
iText(365,309,"1",GLUT_BITMAP_TIMES_ROMAN_24);
iText(415,255,"2",GLUT_BITMAP_TIMES_ROMAN_24);
iText(435,188,"3",GLUT_BITMAP_TIMES_ROMAN_24);
iText(415,125,"4",GLUT_BITMAP_TIMES_ROMAN_24);
iText(365,75,"5",GLUT_BITMAP_TIMES_ROMAN_24);
iText(295,55,"6",GLUT_BITMAP_TIMES_ROMAN_24);
iText(225,75,"7",GLUT_BITMAP_TIMES_ROMAN_24);
iText(175,125,"8",GLUT_BITMAP_TIMES_ROMAN_24);
iText(155,188,"9",GLUT_BITMAP_TIMES_ROMAN_24);
iText(170,255,"10",GLUT_BITMAP_TIMES_ROMAN_24);
iText(215,307,"11",GLUT_BITMAP_TIMES_ROMAN_24);
iLine(300-65*cos(hourangle),200+65*sin(hourangle)
,300,200);
iLine(300+95*cos(minangle),200-95*sin(minangle),300,200);
iLine(300+120*cos(secangle),200-120*sin(secangle),300,200);
}
if(a==2){
hourangle=(hour*(PI/6)+(PI/2))+((minute/12)*(PI/30));
minangle=(minute*(PI/30)-(PI/2));
secangle=second*(PI/30)-(PI/2);
iClear();
iSetColor(255,255,255);
iCircle(300,200,150,10000);
iText(282,330,"12",GLUT_BITMAP_TIMES_ROMAN_24);
iText(365,309,"1",GLUT_BITMAP_TIMES_ROMAN_24);
iText(415,255,"2",GLUT_BITMAP_TIMES_ROMAN_24);
iText(435,188,"3",GLUT_BITMAP_TIMES_ROMAN_24);
iText(415,125,"4",GLUT_BITMAP_TIMES_ROMAN_24);
iText(365,75,"5",GLUT_BITMAP_TIMES_ROMAN_24);
iText(295,55,"6",GLUT_BITMAP_TIMES_ROMAN_24);
iText(225,75,"7",GLUT_BITMAP_TIMES_ROMAN_24);
iText(175,125,"8",GLUT_BITMAP_TIMES_ROMAN_24);
iText(155,188,"9",GLUT_BITMAP_TIMES_ROMAN_24);
iText(170,255,"10",GLUT_BITMAP_TIMES_ROMAN_24);
iText(215,307,"11",GLUT_BITMAP_TIMES_ROMAN_24);
iLine(300-65*cos(hourangle),200+65*sin(hourangle)
,300,200);
iLine(300+95*cos(minangle),200-95*sin(minangle),300,200);
iLine(300+120*cos(secangle),200-120*sin(secangle),300,200);
}
}
void iMouseMove(int mx, int my)
{

}

void iMouse(int button, int state, int mx, int my)
{

}

void iKeyboard(unsigned char key)
{

}

void iSpecialKeyboard(unsigned char key)
{

}
void input_time(void)
{
    second++;
    minute+=0.016667;
    if(second>=60) second=0;
    if(minute>=60){
        minute=0;
        hour++;
        if(hour>12) hour=1;
    }
}
int main()
{
printf("Enter 1 for system time & enter 2 for setting initial time:   ");
scanf("%d",&a);
if(a==2){
    printf("\n");
    printf("Enter the values of hour,minute and second ");
    scanf("%f%f%f",&hour,&minute,&second);
    iSetTimer(1000,input_time);
}
if(a==1)
{
iSetTimer(1000,iDraw);
}
iInitialize(600,400,"My_Clock");
return 0;
}
