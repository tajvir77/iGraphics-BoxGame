/*
	author: S. M. Shahriar Nirjon
	last modified: August 8, 2008
*/
#include "iGraphics.h"
int ball_x=100  , ball_y=100  ;
int dx=5 , dy=7;

int box_x = 200;
int box_y = 5;

int box_height = 20;
int box_width = 80;

/* 
	function iDraw() is called again and again by the system.
*/
void iDraw()
{
	//place your drawing codes here	
	//iPoint(100, 100, 10);
	//iLine(10, 20, 100, 120);
	//iCircle(100, 100, 100, 6);
	iClear();
	iSetColor(0, 255, 0);
	iFilledCircle(ball_x, ball_y, 7);
	iSetColor(255, 0, 0);
	iFilledRectangle(box_x , box_y, box_width, box_height);

	//iSetColor(0, 0, 255);
	//iText(100, 10, "P for Pause, R for Resume");
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
	//printf("(x,y): %d %d \n", mx, my);
}

/*
	function iPassiveMouse() is called when the user moves the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iPassiveMouse(int mx, int my)
{
	//place your codes here
	//printf("(x,y): %d %d \n", mx, my);
}
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)


		printf("Left (x,y): %d %d \n", mx, my);
	{
		//place your codes here
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		printf("Right (x,y): %d %d \n", mx, my);
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	//place your codes for other keys here
	if(key == 'p'){
	iPauseTimer(0);
	}
	if(key == 'r'){
	iResumeTimer(0);
	}
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

	if(key == GLUT_KEY_LEFT){
		box_x -= 10;
	}
	if(key == GLUT_KEY_RIGHT){
		box_x += 10;
	}
}
void ballChange(){
	ball_x += dx;
	ball_y += dy;
	
	if(ball_x > 400 || ball_x < 0) dx = -dx;
	if(ball_y > 400 || ball_y < 0) dy = -dy;
	} 
int main()
{
	iSetTimer(5, ballChange);
	iInitialize(400, 400, "BallDemo");
	iStart();
return 0;
}

