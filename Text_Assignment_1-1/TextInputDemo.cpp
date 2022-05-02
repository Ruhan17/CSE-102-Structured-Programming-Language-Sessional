# include "iGraphics.h"
#include<string.h>
char str[100], str2[100];
int j=0,y;
int len,len1,p=200;
int mode;
int r=255,g=255,b=255;

void drawTextBox()
{
	iSetColor(150, 150, 150);
	iRectangle(50, 250, 250, 30);
}

void iDraw()
{

    iClear();
    drawTextBox();
	if(mode == 1)
	{
		iSetColor(255, 255, 255);
		iText(55, 260, str );
	}
	iText(10, 10, "Click to activate the box, enter to finish.");
    j=0;
    int dx;
    dx=p;
    y=strlen(str2);
    iSetColor(r,g,b);
      while(j<strlen(str2)){
        if(str2[j]=='8'){
           // iSetColor(255,255,0);
            iFilledRectangle(dx,175,40,2);
            iFilledRectangle(dx,135,2,40);
            iFilledRectangle(dx,135,40,2);
            iFilledRectangle(dx+40,135,2,42);
            iFilledRectangle(dx,95,2,40);
            iFilledRectangle(dx,95,40,2);
            iFilledRectangle(dx+40,95,2,40);
        }
        if(str2[j]=='0'){
            //iSetColor(255,255,0);
            iFilledRectangle(dx,175,40,2);
            iFilledRectangle(dx,135,2,40);
            iFilledRectangle(dx,135,0,2);
            iFilledRectangle(dx+40,135,2,42);
            iFilledRectangle(dx,95,2,40);
            iFilledRectangle(dx,95,40,2);
            iFilledRectangle(dx+40,95,2,40);
        }
        if(str2[j]=='1'){
          //  iSetColor(255,255,0);
            iFilledRectangle(dx,175,0,2);
            iFilledRectangle(dx,135,0,40);
            iFilledRectangle(dx,135,0,2);
            iFilledRectangle(dx+40,135,2,42);
            iFilledRectangle(dx,95,0,40);
            iFilledRectangle(dx,95,0,2);
            iFilledRectangle(dx+40,95,2,40);
        }
        if(str2[j]=='2'){
            //iSetColor(255,255,0);
            iFilledRectangle(dx,175,40,2);
            iFilledRectangle(dx,135,0,40);
            iFilledRectangle(dx,135,40,2);
            iFilledRectangle(dx+40,135,2,42);
            iFilledRectangle(dx,95,2,40);
            iFilledRectangle(dx,95,40,2);
            iFilledRectangle(dx+40,95,0,40);
        }
        if(str2[j]=='3'){
            //iSetColor(255,255,0);
            iFilledRectangle(dx,175,40,2);
            iFilledRectangle(dx,135,0,40);
            iFilledRectangle(dx,135,40,2);
            iFilledRectangle(dx+40,135,2,42);
            iFilledRectangle(dx,95,0,40);
            iFilledRectangle(dx,95,40,2);
            iFilledRectangle(dx+40,95,2,40);
        }
        if(str2[j]=='4'){
            //iSetColor(255,255,0);
            iFilledRectangle(dx,175,0,2);
            iFilledRectangle(dx,135,2,40);
            iFilledRectangle(dx,135,40,2);
            iFilledRectangle(dx+40,135,2,42);
            iFilledRectangle(dx,95,0,40);
            iFilledRectangle(dx,95,0,2);
            iFilledRectangle(dx+40,95,2,40);
        }
        if(str2[j]=='5'){
            //iSetColor(255,255,0);
            iFilledRectangle(dx,175,40,2);
            iFilledRectangle(dx,135,2,40);
            iFilledRectangle(dx,135,40,2);
            iFilledRectangle(dx+40,135,0,42);
            iFilledRectangle(dx,95,0,40);
            iFilledRectangle(dx,95,40,2);
            iFilledRectangle(dx+40,95,2,42);
        }
        if(str2[j]=='6'){
            //iSetColor(255,255,0);
            iFilledRectangle(dx,175,40,2);
            iFilledRectangle(dx,135,2,40);
            iFilledRectangle(dx,135,40,2);
            iFilledRectangle(dx+40,135,0,42);
            iFilledRectangle(dx,95,2,40);
            iFilledRectangle(dx,95,40,2);
            iFilledRectangle(dx+40,95,2,42);
        }
        if(str2[j]=='7'){
            //iSetColor(255,255,0);
            iFilledRectangle(dx,175,40,2);
            iFilledRectangle(dx,135,0,40);
            iFilledRectangle(dx,135,0,2);
            iFilledRectangle(dx+40,135,2,42);
            iFilledRectangle(dx,95,0,40);
            iFilledRectangle(dx,95,0,2);
            iFilledRectangle(dx+40,95,2,40);
        }
        if(str2[j]=='9'){
            //iSetColor(255,255,0);
            iFilledRectangle(dx,175,40,2);
            iFilledRectangle(dx,135,2,40);
            iFilledRectangle(dx,135,40,2);
            iFilledRectangle(dx+40,135,2,42);
            iFilledRectangle(dx,95,0,40);
            iFilledRectangle(dx,95,0,2);
            iFilledRectangle(dx+40,95,2,40);
        }
        if(str2[j]=='A'){
            //iSetColor(255,255,0);
            iFilledRectangle(dx,175,40,2);
            iFilledRectangle(dx,135,2,40);
            iFilledRectangle(dx,135,40,2);
            iFilledRectangle(dx+40,135,2,42);
            iFilledRectangle(dx,95,2,40);
            iFilledRectangle(dx,95,0,2);
            iFilledRectangle(dx+40,95,2,40);
        }
        if(str2[j]=='b'){
            //iSetColor(255,255,0);
            iFilledRectangle(dx,175,0,2);
            iFilledRectangle(dx,135,2,40);
            iFilledRectangle(dx,135,40,2);
            iFilledRectangle(dx+40,135,0,42);
            iFilledRectangle(dx,95,2,40);
            iFilledRectangle(dx,95,40,2);
            iFilledRectangle(dx+40,95,2,42);
        }
        if(str2[j]=='C'){
            //iSetColor(255,255,0);
            iFilledRectangle(dx,175,40,2);
            iFilledRectangle(dx,135,2,40);
            iFilledRectangle(dx,135,0,2);
            iFilledRectangle(dx+40,135,0,42);
            iFilledRectangle(dx,95,2,40);
            iFilledRectangle(dx,95,40,2);
            iFilledRectangle(dx+40,95,0,40);
        }
        if(str2[j]=='D'){
          //  iSetColor(255,255,0);
            iFilledRectangle(dx,175,40,2);
            iFilledRectangle(dx,135,2,40);
            iFilledRectangle(dx,135,0,2);
            iFilledRectangle(dx+40,135,2,42);
            iFilledRectangle(dx,95,2,40);
            iFilledRectangle(dx,95,40,2);
            iFilledRectangle(dx+40,95,2,40);
        }
        if(str2[j]=='E'){
        //    iSetColor(255,255,0);
            iFilledRectangle(dx,175,40,2);
            iFilledRectangle(dx,135,2,40);
            iFilledRectangle(dx,135,40,2);
            iFilledRectangle(dx+40,135,0,42);
            iFilledRectangle(dx,95,2,40);
            iFilledRectangle(dx,95,40,2);
            iFilledRectangle(dx+40,95,0,40);
        }
        if(str2[j]=='F'){
            //iSetColor(255,255,0);
            iFilledRectangle(dx,175,40,2);
            iFilledRectangle(dx,135,2,40);
            iFilledRectangle(dx,135,40,2);
            iFilledRectangle(dx+40,135,0,42);
            iFilledRectangle(dx,95,2,40);
            iFilledRectangle(dx,95,0,2);
            iFilledRectangle(dx+40,95,0,40);
        }
        dx+=50;
        j++;
    }
}


/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		if(mx >= 50 && mx <= 300 && my >= 250 && my <= 280 && mode == 0)
		{
			mode = 1;
		}
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}

void iKeyboard(unsigned char key)
{
	int i;
	if(mode == 1)
	{
        if(key == '\r')
		{
			mode=0;
			strcpy(str2,str);
			len=strlen(str);
			for(i=0;i<len;i++)
				str[i]=0;
			len = 0;
		}
		else
		{
			str[len] = key;
			len++;
		}
	}

	if(key == 'x')
	{
		//do something with 'x'
		exit(0);
	}
	//place your codes for other keys here
}


void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}

	//place your codes for other keys here
}
void change()
{
    p-=1;
    if(p<=(-y*50)) p=400;


}
void zigzag()
{
    r=rand()%255;
    g=rand()%255;
    b=rand()%255;
}

int main()
{   len=0;
    mode=0;
    str[0]=0;
    iSetTimer(25,change);
    iSetTimer(200,zigzag);
	iInitialize(400, 400, "TextInputDemo");
	return 0;
}
