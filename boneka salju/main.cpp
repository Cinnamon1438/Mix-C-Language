#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <gl\glut.h>
#include <gl\glu.h>
#include <stdlib.h>
#include <iostream>

float w = 480, h = 480;
float sudut = 0, rx = 0, ry = 0, rz = 0, p = -50;
void satu(){
	glColor3d(1,1,1);
	glutSolidSphere(7,200,200);
}

void dua(){
	glColor3d(1,1,1);
	glutSolidSphere(9,250,250);
}

void tiga(){
	glColor3d(1,1,0);
	glRotatef(-90,1,0,0);
	glutSolidCone(5,10,150,150);
}

void empat(){
	glColor3d(0,0,0);
	glutSolidSphere(1.1,100,100);
}

void lima(){
	glColor3d(0,1,0);
	glutSolidCone(1.1,5,50,50);
}

void manusiaSalju3D(){
	satu();
	glPushMatrix();
	glTranslatef(0,-15,0);
	
	dua();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,5,0);
	
	tiga();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-2,1,6);
	
	empat();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(2,1,6);
	
	empat();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,-0.5,6);
	
	lima();
	glPopMatrix();

}

void display(){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(0,0,p);
	glRotatef(sudut,rx,ry,rz);
	manusiaSalju3D();
	glutSwapBuffers();
}

void resize(int w1, int h1){
	glViewport(0,0,w1,h1);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (float) w1/(float) h1, 1.0,300.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void init(){
	glClearColor (0.0,0.0,0.0,1.0);
	glEnable(GL_DEPTH_TEST);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45., (GLdouble)w/(GLdouble)h,1.,300.);
	glMatrixMode(GL_MODELVIEW);
}

void myKeyboard(unsigned char key, int x, int y){
	if(key=='x'){
		rx=1;
		ry=0;
		rz=0;
		sudut+=10;
	}
	
	else if(key=='y'){
		rx=0;
		ry=1;
		rz=0;
		sudut+=10;
	}
	
		else if(key=='z'){
		rx=0;
		ry=0;
		rz=1;
		sudut+=10;
	}
	else if(key=='a') glColor3f(1,0,0);
}

void update(int value){
	glutPostRedisplay();
	glutTimerFunc(50,update,0);
}

int main (int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGBA);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(w, h);
	glutCreateWindow("Boneka Salju");
	glutDisplayFunc(display);
	glutReshapeFunc(resize);
	init();
	glutTimerFunc(50,update,0);
	glutKeyboardFunc(myKeyboard);
	glutMainLoop();
}
