#include "GL/freeglut.h"
#define _USE_MATH_DEFINES // для C++
#include <cmath>
#include <math.h>
#include <array>
#include <ctime>
#include <stdlib.h>
#include <time.h>
#include"Draw.h"
#include <iostream>

void Kvadrat(Figure& f);


clock_t time_appStar;
clock_t time_kombain;



// блок реализации функций

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(600, 600);
	glutCreateWindow("OpenGL Start Application");
	glutDisplayFunc(renderScene);
	//glutKeyboardFunc(processKeys);

	glutTimerFunc(1000 / 60, animate, 1);
	time_appStar = clock();
	time_kombain = clock();
	glutMainLoop();
	return 0;
}
float speedX = 0.003f, speedY = 0.00059f; 
float timer = 0;
float point = 0.0;
void animate(int value) {
	glutPostRedisplay();
	glutTimerFunc(1000 / 60, animate, 1);
	timer += 0.0016;
	//std::cout << timer << std::endl;
}
void drawAnima() {
	kombainF.pos.x += -speedX;
	kombainF.pos.y += -speedY;
	if (kombainF.pos.x < -1.3) {
		clock_t cT = clock() - time_appStar - time_kombain;
		float x = -15.0;
		float y = -0.45;
		if (cT < 26000) {
			y = 0.0;
			x = -37.0 + ((2.0 - 0.0) / (1000 - 0.0)) * (cT - 1000);
		}
		else {
			background2();
			Kombain(kombainF2);  //Комбайн
			kombainF2.pos.x += speedX;
			if (kombainF2.pos.x > 0.1) {
				kombainF2.pos.x = 0.1;
			}		
			carF.pos.x -= speedX; // Машина
			Car(carF);
			if (carF.pos.x < -0.5) {
				carF.pos.x = -0.5;
			}
			if ((kombainF2.pos.x >= 0.1) &&(carF.pos.x <= -0.5) && (timer < 3.6)) {
				for (int i = 0; i < 1; i++) {
					StogKvadrat(StogF); // Сброс стогов
					StogF.pos.x -= (speedX);
					StogF.pos.y -= (speedY + 0.005);
					if (StogF.pos.y <= 0.1) {
						StogF.pos.x = -0.085;
						StogF.pos.y = 0.205;
					}
				}
			}
			if (timer >= 3.7) {
				glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
				background2();
				Kombain(kombainF3);
				kombainF3.pos.x += speedX;
				Car(carF2);
				carF2.pos.x -= speedX;
			}
			if (timer >= 4.3) {
				exit(0);
			}
			Flowers();
			stogi();
			
		}
		Figure f = { {x / 10,y / 10}, 1,0 };
		Figure carF = { {x / 10, y / 10},1,0 };
		Figure StogF = { {x / 10, y / 10},1,0 };
		Kvadrat(f);
		Kombain(f);
	}
	Kombain(kombainF);

}

void renderScene(void) {

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // эта функция должна быть первой в renderScene
	glBegin(GL_TRIANGLES);
	glEnd();
	Polya_Nebo();
	Ambar();
	Trees();
	Oblako();
	Trava();
	Flowers();
	drawAnima();
	Figure f = { 0, 0, false, 100 };
	glutSwapBuffers(); // эта функция должна быть последний в renderScene
}
/*void processKeys(unsigned char key, int x, int y) {
	if (key == 'd') {
		kombainF.pos.x += 0.01;
		kombainF.isRight = true;
	}
	if (key == 'a') {
		kombainF.pos.x -= 0.01;
		kombainF.isRight = false;
	}
	glutPostRedisplay();
}*/
