/*
	author: S. M. Shahriar Nirjon
	last modified: August 8, 2008
*/
#include "iGraphics.h"
#include "bitmap_loader.h"
#include"stdio.h"


int pic_x = 250, pic_y = 500;
int pic_w = 40, pic_z = 500;
int pic_o = 250, pic_p = 250;
int pic_i , pic_j  ;
char str;


void iDraw()
{
	//place your drawing codes here	
	iClear();
	iShowBMP(pic_x, pic_y, "red ballon.bmp"); 
	iShowBMP(pic_w, pic_z, "green ballon.bmp");
	iShowBMP(pic_o, pic_p, "target .bmp");
	iShowBMP(pic_i, pic_j, "fire.bmp");
	iSetColor(0, 255, 0);
	iText(500,600,"Player Name-----Score");
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	
}

/*
	function iPassiveMouse() is called when the user moves the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iPassiveMouse(int mx , int my)
{
	pic_o = mx - 30;
	pic_p = my - 30;
		
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
		pic_i = mx -30;
		pic_j = my -30;
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{	

	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	//place your codes for other keys here
	
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
	//place your codes for other keys here
}
void redballonChange()
{
	//pic_x -= 0;
	pic_y -= 5;
	
}
void greenballonChange()
{
	//pic_w -= 0; 
	pic_z -= 5;
}
void tergetStricker(){
	
}

int main()
{
	iSetTimer(50,redballonChange);
	iSetTimer(120,greenballonChange);
	iInitialize(700, 700, "Ballon Demo");
	iStart();
	return 0;
}

