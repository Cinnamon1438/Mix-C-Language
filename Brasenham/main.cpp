#include <math.h>
#include <GL/glut.h>

void show(void) {
	glClearColor(1, 0, 1, 1); // warna display
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 300.0, 0.0, 300.0);
}

void dotPixel(GLint xCoordinate, GLint yCoordinate) {
	glBegin(GL_POINTS); //membuat titik  
	glVertex2i(xCoordinate, yCoordinate);  
	glEnd();  
	glFlush();
}

void bresenhamLine(GLint x0, GLint y0, GLint xEnd, GLint yEnd) {
	GLint dx = (float) fabs((float) xEnd - x0); //Menghitung dx   
	GLint dy = (float) fabs((float) yEnd - y0); //Menghitung dy  
	GLint p = 2 * dy - dx; //Hitung parameter : p = 2dy ? dx  
	GLint twoDy = 2 * dy; //Hitung twoDy = 2 * dy  
	GLint twoDyMinusDx = 2 * (dy - dx); //Hitung twoDyDx = 2dy - 2dx / 2 * (dy - dx)  
	GLint x, y; 

	if (x0 > xEnd) { 
		// pk < 0    
		x = xEnd;   
		y = yEnd;   
		xEnd = x;  
	} else {   
		x = x0;   
		y = y0;  
	}  

	dotPixel(x, y); 

	while (x < xEnd) {   
		x++; //xk+1   
		if (p<0)    
			p += twoDy; //pk= pk + 2dy   
		else {    
			y++; //yk+1    
			p += twoDyMinusDx; //pk= pk + twoDyDx   
		}   

		dotPixel(x, y);
	}
}

void lineMaker(void) {
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1, 1, 0); //warna garis
	glPointSize(18.0); //ukuran titik  
	GLint x0	= 50; //x0  
	GLint y0	= 50; //y0  
	GLint xEnd	= 54; //x1  
	GLint yEnd	= 53; //y1 

	bresenhamLine(x0, y0, xEnd, yEnd);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);  
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);  
	glutInitWindowSize(250, 250);  
	glutInitWindowPosition(0, 0);  
	glutCreateWindow("Algorithm Bresenham");  
	show();  
	glutDisplayFunc(lineMaker);  
	glutMainLoop();
	return 0;
}

