#include "iGraphics.h"
#include "myheader.h"
#include "bitmap_loader.h"
#include <math.h>
int play_clicked=0;
bool musicOn =  false;
int dxBox = 155;
int dyBox = 30;

/* 
	function iDraw() is called again and again by the system.
*/

void iDraw()
{
	if(play_clicked==0)
	{
	iClear();
	iShowBMP(0,0,"N-1.bmp");
	}
	if(play_clicked==1)
	{
	iClear();
	iShowBMP(0,0,"N-5.bmp");
	}
	if(play_clicked==2)
	{
	iClear();
	iShowBMP(0,0,"N-5.bmp");
	}
	if(play_clicked==3)
	{
	iClear();
	iShowBMP(0,0,"N-3.bmp");
	}
	if(play_clicked==4)
	{
	iClear();
	iShowBMP(0,0,"N-2.bmp");
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
	function iPassiveMouse() is called when the user moves the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iPassiveMouse(int mx, int my)
{
	//place your codes here
	printf("(x,y): %d %d \n", mx, my);
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(play_clicked == 0 && mx >= 330 && mx <= 330 + dxBox  && my >= 360 && my <= 360 + dyBox)
			
		{
			play_clicked = 1;
		}

		if(play_clicked == 0 && mx >= 330 && mx <= 330 + dxBox  && my >= 320 && my <= 320 + dyBox)
			
		{
			play_clicked = 2;
		}
		if(play_clicked == 2 && mx >= 330 && mx <= 330 + dxBox && my >= 30 && my <= 30 + dyBox)
			
		{
			play_clicked = 0;
		}
		if(play_clicked == 0 && mx >= 330 && mx <= 330 + dxBox  && my >= 280 && my <= 280 + dyBox)
			
		{
			play_clicked = 3;
		}
		
		if(play_clicked == 3 && mx >= 330 && mx <= 330 + dxBox && my >= 30 && my <= 30 + dyBox)
			
		{
			play_clicked = 0;
		}
		if(play_clicked == 0 && mx >= 330 && mx <= 330 + dxBox && my >= 240 && my <= 240 + dyBox)
			
		{
			play_clicked = 4;
		}
		if(play_clicked == 4 && mx >= 330 && mx <= 330 + dxBox && my >= 30 && my <= 30 + dyBox)
			
		{
			play_clicked = 0;
		}


		//place your codes here

	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)

{
	/*
	if( play_clicked == 0 && key == '1')
	{	
		play_clicked = 1;	
	}
	if( play_clicked == 1 && key == '2')
	{	
		play_clicked = 2;	
	}
	if( play_clicked == 2 && key == '3')
	{	
		play_clicked = 3;	
	}
	if( play_clicked == 3 && key == '4')
	{	
		play_clicked = 4;	
	}
	if( play_clicked == 4 && key == '5')
	{	
		play_clicked = 5;	
	}
	*/
}
/*

	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{
	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
}

int main()
{
	if(musicOn)
	PlaySound("sound.wav", NULL, SND_LOOP | SND_ASYNC);
	//iInitialize(1000, 800, "Box-Game");
	iInitialize(768, 480, "Box-Game");
	iStart();
	return 0;
}	