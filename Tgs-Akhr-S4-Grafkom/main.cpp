#include <windows.h>
#include <iostream>
#include <math.h>
#include <GL/glut.h>

// Untuk mendeklarasikan variable pergerakan pada animasi serta memberikan nilai lebar dan tingginya
int rotate = 1;

double rotate_y = 10;
double rotate_x = -10;

const int WIDTH = 520;
const int HEIGHT = 520;


// Untuk Mengatur key Kubus yang akan digunakan
void keyboard(unsigned char keyPressed, int x, int y)
{
	
	switch (keyPressed)
	{
	case '1':
		rotate = 1;
		break;
	case 'a':
		rotate_x = -10;
		rotate_y = 10;
		break;
	case '2':
		rotate = 2;
		break;
	case 'b':
		rotate_x = -10;
		rotate_y = 20 * 5;
		break;
	case '3':
		rotate = 3;
		break;
	case 'c':
		rotate_x = -20 * 5;
		rotate_y = 0;
		break;
	case '4':
		rotate = 4;
		break;
	case 'd':
		rotate_x = 15 * 5;
		rotate_y = 0;
		break;
	case '5':
		rotate = 5;
		break;
	case 'e':
		rotate_x = -10;
		rotate_y = -16 * 5;
		break;
	case '6':
		rotate = 6;
		break;
	case 'f':
		rotate_y = 38 * 5;
		rotate_x = -10;
		break;
	case '0':
		rotate = 0;
		break;
	}

	glutPostRedisplay();
}

void timer(int value)
{

	if (rotate == 2 && rotate_x <= -10 && rotate_y <= 100)
	{
		rotate_y += 5;
	}
	if (rotate == 3 && rotate_x >= -100 && rotate_y >= 0)
	{
		rotate_x -= 5;
	}
	if (rotate == 4 && rotate_x <= 75)
	{
		rotate_x += 5;
	}
	else if (rotate == 5 && rotate_x <= 170 )
	{
		rotate_x += 5;
	}
	else if (rotate == 6 && rotate_y >= -10)
	{
		rotate_y -= 5;
	}
	else if (rotate == 0)
	{
		rotate_x += 5;
		rotate_y += 5;
	}
	glutTimerFunc(25, timer, 0);
	glutPostRedisplay();
}

// Dibagian ini untuk membentuk bentuk Kubus
void draw(){
	
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glDisable(GL_DEPTH_TEST);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	// Background gradien
	glBegin(GL_QUADS);
	// Warna Hitam
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-1.0, 1.0);
	glVertex2f(-1.0,-1.0);
	// Warna Putih
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(1.0,-1.0);
	glVertex2f(1.0, 1.0);
	glEnd();
	
	
	glLoadIdentity();
	glEnable(GL_DEPTH_TEST);


	glRotatef(rotate_x, 1.0, 0.0, 0.0);
	glRotatef(rotate_y, 0.0, 1.0, 0.0);

	// Sisi Merah
	glPushMatrix();
	glTranslatef(0, 0, -0.51);
	glPopMatrix();
	glBegin(GL_POLYGON);
	
	glColor3f(1, 0, 0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(0.5, -0.5, -0.5);
	glTexCoord2f(0.0, 1.0);  
    glVertex3f(0.5, 0.5, -0.5);
	glTexCoord2f(0.0, 0.0);    
    glVertex3f(-0.5, 0.5, -0.5); 
	glTexCoord2f(1.0, 0.0);   
   	glVertex3f(-0.5, -0.5, -0.5);    
	glEnd();

	// Sisi Kuning
	glPushMatrix();
	glRotatef(90, 0, 1, 0);
	glTranslatef(0, 0, 0.51);

	glPopMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 0);

	glTexCoord2f(1.0, 1.0);
	glVertex3f(0.5, -0.5, -0.5);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(0.5, 0.5, -0.5);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(0.5, 0.5, 0.5);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(0.5, -0.5, 0.5);
	glEnd();

	// Sisi Hijau
	glPushMatrix();
	glRotatef(90, 1, 0, 0);
	glTranslatef(0, 0, -0.51);
	glPopMatrix();
	glBegin(GL_POLYGON);

	glColor3f(0, 1, 0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(0.5, 0.5, 0.5);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(0.5, 0.5, -0.5);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-0.5, 0.5, -0.5);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-0.5, 0.5, 0.5);
	glEnd();


	// Sisi Biru
	glPushMatrix();
	glRotatef(90, 1, 0, 0);
	glTranslatef(0, 0, 0.51);

	glPopMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(0.5, -0.5, -0.5);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(0.5, -0.5, 0.5);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-0.5, -0.5, 0.5);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-0.5, -0.5, -0.5);
	glEnd();


	// Sisi Ungu
	glPushMatrix();
	glRotatef(90, 0, 1, 0);
	glTranslatef(0, 0, -0.51);

	glPopMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 1);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-0.5, -0.5, 0.5);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-0.5, 0.5, 0.5);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-0.5, 0.5, -0.5);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-0.5, -0.5, -0.5);
	glEnd();

	// Sisi Cyan
	glPushMatrix();
	glTranslatef(0, 0, 0.51);

	glPopMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0, 1, 1);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(0.5, -0.5, 0.5);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(0.5, 0.5, 0.5);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-0.5, 0.5, 0.5);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-0.5, -0.5, 0.5);
	glEnd();

	glFlush();
	glutSwapBuffers();

}

void specialKeys(int key, int x, int y) {


	if (key == GLUT_KEY_RIGHT)
		rotate_y += 5;

	else if (key == GLUT_KEY_LEFT)
		rotate_y -= 5;

	else if (key == GLUT_KEY_UP)
		rotate_x += 5;

	else if (key == GLUT_KEY_DOWN)
		rotate_x -= 5;

	glutPostRedisplay();

}



int main(int argc, char* argv[]){

	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Rotasi Kubus");
	
	glutDisplayFunc(draw);
	glutSpecialFunc(specialKeys);
	glutKeyboardFunc(keyboard);
	glutTimerFunc(1000, timer, 0);
	
	glutMainLoop();
	
	return 0;

}

