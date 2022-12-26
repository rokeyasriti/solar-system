#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float x,y,i;
float counter_m=0.0;
float counter_v=0.0;
float counter_e=0.0;
float counter_ma=0.0;
void init(void)
{
	//gluOrtho2D(0,800,400,0);
	//glOrtho(0,800,500,0,1,-1);
}
void fan(void)
{
	glClearColor(0.0,0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	//glPointSize(10.0);
	//glLoadIdentity();
	 glLoadIdentity();

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.8*sin(i);
			y=0.8*cos(i);
			glVertex2f(x,y);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(0,0,0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.79*sin(i);
			y=0.79*cos(i);
			glVertex2f(x,y);
		}


	glEnd();

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.6*sin(i);
			y=0.6*cos(i);
			glVertex2f(x,y);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(0,0,0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.59*sin(i);
			y=0.59*cos(i);
			glVertex2f(x,y);
		}


	glEnd();

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.4*sin(i);
			y=0.4*cos(i);
			glVertex2f(x,y);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(0,0,0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.39*sin(i);
			y=0.39*cos(i);
			glVertex2f(x,y);
		}


	glEnd();

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.2*sin(i);
			y=0.2*cos(i);
			glVertex2f(x,y);
		}

	glEnd();

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(0,0,0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.19*sin(i);
			y=0.19*cos(i);
			glVertex2f(x,y);
		}

   glEnd();

   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.06*sin(i);
			y=0.06*cos(i);
			glVertex2f(x,y);
		}

   glEnd();


//mercury
glPushMatrix();
glRotatef(counter_m,0.0,0.0,-1.0);
counter_m+=2.0;
glTranslatef(0.19f,0.0f,0.0f);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255 ,245 ,238);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.035*sin(i);
y=0.035*cos(i);
glVertex2f(x,y);
}

glEnd();
glPopMatrix();



//venus
glPushMatrix();
glRotatef(counter_v,0.0,0.0,-1.0);
counter_v+=3.0;
glTranslatef(0.39f,0.0f,0.0f);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(238, 207, 161);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.04*sin(i);
y=0.04*cos(i);
glVertex2f(x,y);
}

glEnd();
glPopMatrix();

//earth
glPushMatrix();
glRotatef(counter_e,0.0,0.0,-1.0);
counter_e+=4.0;
glTranslatef(0.59f,0.0f,0.0f);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(30,144,255);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.05*sin(i);
y=0.05*cos(i);
glVertex2f(x,y);
}

glEnd();
glPopMatrix();

//mars
glPushMatrix();
glRotatef(counter_ma,0.0,0.0,-1.0);
counter_ma+=5.0;
glTranslatef(0.79f,0.0f,0.0f);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(205,38,38);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.06*sin(i);
y=0.06*cos(i);
glVertex2f(x,y);
}

glEnd();
glPopMatrix();

glutSwapBuffers();
}
int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
	glutInitWindowPosition(-1,-1);
	glutInitWindowSize(640,480);
	glutCreateWindow("Solar System");
	init();
	glutDisplayFunc(fan);
	glutIdleFunc(fan);
	glutMainLoop();
	return 0;
}
