#include "Draw.h"
#define _USE_MATH_DEFINES 
#include <cmath>
#include <math.h>
#include <array>
#include <ctime>

void Polya_Nebo(void) {
	glBegin(GL_QUAD_STRIP); //среднее поле
	glColor3ub(200, 100, 0);
		glVertex2f(-1, -0.2);
	glColor3ub(200, 100, 0);
		glVertex2f(-1, -1);
	glColor3ub(200, 100, 0);
		glVertex2f(1, 0.2);
	glColor3ub(200, 100, 0);
		glVertex2f(1, -1);
	glEnd();

	glBegin(GL_POLYGON); // небо
	glColor3ub(125, 250, 255);
		glVertex2f(0, 1);
	glColor3ub(125, 250, 255);
		glVertex2f(-1, 1);
	glColor3ub(125, 250, 255);
		glVertex2f(-1, 0.5);
	glColor3ub(125, 250, 255);
		glVertex2f(0.5, 0.1);
	glColor3ub(125, 250, 255);
		glVertex2f(1, 0.2);
	glColor3ub(125, 250, 255);
		glVertex2f(1, 1);
	glEnd();

	float x = 0; //солнце
	float y = 0;
	float cnt = 30;
	float l = 0.2;
	float a = M_PI * 2 / cnt;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(244, 244, 12);
	glVertex2f(x-1, y+1);
	for (int i = -1; i < cnt; i++) {
		x = sin(a * i) * l;
		y = cos(a * i) * l;
		glVertex2f(x -1, y + 1);
	}
	glEnd();
	glBegin(GL_TRIANGLES); // дальнее поле
	glColor3ub(200, 200, 0);
		glVertex2f(-1, 0.5);
	glColor3ub(200, 200, 0);
		glVertex2f(-1, -0.2);
	glColor3ub(200, 100, 0);
		glVertex2f(0.5, 0.1);
	glEnd();

	glBegin(GL_QUAD_STRIP); // ближнее поле
	glColor3ub(100, 100, 0);
		glVertex2f(-1, -0.6);
	glColor3ub(100, 100, 0);
		glVertex2f(-1, -1);
	glColor3ub(100, 100, 0);
		glVertex2f(1, -0.6);
	glColor3ub(200, 200, 0);
		glVertex2f(1, -1);
	glEnd();

	//glBegin(GL_LINES);
	//glEnd();
}
void Trava(void) {
	float x = 2;
	float y = 1;
	glBegin(GL_LINES);
	for (int j = 0; j < 27; j++) {
		glColor3ub(1,50,32);//первая травинка
			glVertex2f(x-0.95, y -1.55);
		glColor3ub(1, 50, 32);
			glVertex2f(x-1, y -1.6); 
		glColor3ub(1, 50, 32);//вторая травинка
			glVertex2f(x-1, y-1.55);
		glColor3ub(1, 50, 32);
			glVertex2f(x - 1, y - 1.6);
		glColor3ub(1, 50, 32);//третья травинка
			glVertex2f(x - 0.95, y -1.5);
		glColor3ub(1, 50, 32);
			glVertex2f(x - 1, y - 1.6);
		glColor3ub(1, 50, 32);//четвертая травинка
			glVertex2f(x - 0.97, y - 1.5);
		glColor3ub(1, 50, 32);
			glVertex2f(x - 1, y - 1.6);
		glColor3ub(1, 50, 32);//пятая травинка
			glVertex2f(x - 1.05, y - 1.56);
		glColor3ub(1, 50, 32);
			glVertex2f(x - 1, y - 1.6);
			x -= 0.08;
	}
	glEnd();
}


void Oblako(void) { //части справа налево, снизу вверх
	float x, y;
	float cnt = 30;
	float l = 0.08;
	float a = M_PI * 2 / cnt;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(100, 100, 100);
	glVertex2f(0.5, 0.7);
	for (int i = -1; i < cnt; i++) {
		x = sin(a * i) * l;
		y = cos(a * i) * l;
		glVertex2f(x + 0.5, y + 0.7);
	}
	glEnd();

	float x1, y1;
	float cnt1 = 30;
	float l1 = 0.09;
	float a1 = M_PI * 2 / cnt1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(100, 100, 100);
	glVertex2f(0.4, 0.7);
	for (int i = -1; i < cnt1; i++) {
		x1 = sin(a1 * i) * l1;
		y1 = cos(a1 * i) * l1;
		glVertex2f(x1 + 0.4, y1 + 0.7);
	}
	glEnd();

	float x2, y2;
	float cnt2 = 30;
	float l2 = 0.08;
	float a2 = M_PI * 2 / cnt2;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(100, 100, 100);
	glVertex2f(0.5, 0.7);
	for (int i = -1; i < cnt2; i++) {
		x2 = sin(a2 * i) * l2;
		y2 = cos(a2 * i) * l2;
		glVertex2f(x2 + 0.3, y2 + 0.7);
	}
	glEnd();

	float x3, y3;
	float cnt3 = 30;
	float l3 = 0.07;
	float a3 = M_PI * 2 / cnt3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(100, 100, 100);
	glVertex2f(0.45, 0.8);
	for (int i = -1; i < cnt3; i++) {
		x3 = sin(a3 * i) * l3;
		y3 = cos(a3 * i) * l3;
		glVertex2f(x3 + 0.45, y3 + 0.8);
	}
	glEnd();

	float x4, y4;
	float cnt4 = 30;
	float l4 = 0.08;
	float a4 = M_PI * 2 / cnt4;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(100, 100, 100);
	glVertex2f(0.36, 0.77);
	for (int i = -1; i < cnt4; i++) {
		x4 = sin(a4 * i) * l4;
		y4 = cos(a4 * i) * l4;
		glVertex2f(x4 + 0.36, y4 + 0.77);
	}
	glEnd();
}
void Trees(void) {
	glBegin(GL_QUAD_STRIP); //ближнее дерево
	glColor3ub(101, 67, 33);
	glVertex2f(-0.6, 0.12);
	glColor3ub(101, 67, 33);
	glVertex2f(-0.6, -0.13);
	glColor3ub(101, 67, 33);
	glVertex2f(-0.55, 0.12);
	glColor3ub(101, 67, 33);
	glVertex2f(-0.55, -0.12);
	glEnd();

	glBegin(GL_TRIANGLES); // нижний треугольник
	glColor3ub(50, 255, 50);
	glVertex2f(-0.67, -0.06);
	glColor3ub(0, 50, 0);
	glVertex2f(-0.58, 0.06);
	glColor3ub(50, 255, 50);
	glVertex2f(-0.48, -0.06);
	glEnd();

	glBegin(GL_TRIANGLES); // верхний треугольник
	glColor3ub(50, 255, 50);
	glVertex2f(-0.67, 0.02);
	glColor3ub(0, 50, 0);
	glVertex2f(-0.577, 0.15);
	glColor3ub(50, 255, 50);
	glVertex2f(-0.48, 0.02);
	glEnd();


	glBegin(GL_QUAD_STRIP); //  дальнее дерево
	glColor3ub(101, 67, 33);
	glVertex2f(-0.1, 0.34);
	glColor3ub(101, 67, 33);
	glVertex2f(-0.1, 0.26);
	glColor3ub(101, 67, 33);
	glVertex2f(-0.05, 0.34);
	glColor3ub(101, 67, 33);
	glVertex2f(-0.05, 0.24);
	glEnd();

	glBegin(GL_TRIANGLES); // нижний треугольник
	glColor3ub(50, 255, 50);
	glVertex2f(-0.15, 0.3);
	glColor3ub(0, 50, 0);
	glVertex2f(-0.075, 0.38);
	glColor3ub(50, 255, 50);
	glVertex2f(0, 0.3);
	glEnd();

	glBegin(GL_TRIANGLES); // средний треугольник
	glColor3ub(50, 255, 50);
	glVertex2f(-0.15, 0.35);
	glColor3ub(0, 50, 0);
	glVertex2f(-0.075, 0.43);
	glColor3ub(50, 255, 50);
	glVertex2f(0, 0.35);
	glEnd();

	glBegin(GL_TRIANGLES); // верхний треугольник
	glColor3ub(50, 255, 50);
	glVertex2f(-0.15, 0.4);
	glColor3ub(0, 50, 0);
	glVertex2f(-0.075, 0.49);
	glColor3ub(50, 255, 50);
	glVertex2f(0, 0.4);
	glEnd();

}


void Ambar(void) {
	glBegin(GL_QUAD_STRIP); // лицевая часть
	glColor3ub(200, 100, 0);
	glVertex2f(0.5, 0.4);
	glColor3ub(200, 0, 0);
	glVertex2f(0.5, 0.1);
	glColor3ub(200, 100, 0);
	glVertex2f(1, 0.4);
	glColor3ub(200, 0, 0);
	glVertex2f(1, 0.2);
	glEnd();

	glBegin(GL_QUAD_STRIP); // дверь
	glColor3ub(200, 100, 0);
	glVertex2f(0.6, 0.25);
	glColor3ub(200, 200, 200);
	glVertex2f(0.6, 0.12);
	glColor3ub(200, 100, 0);
	glVertex2f(0.7, 0.25);
	glColor3ub(200, 200, 200);
	glVertex2f(0.7, 0.14);
	glEnd();

	glBegin(GL_TRIANGLES); // лицевая часть крыши
	glColor3ub(200, 100, 0);
	glVertex2f(0.5, 0.4);
	glColor3ub(200, 100, 0);
	glVertex2f(1, 0.4);
	glColor3ub(200, 0, 0);
	glVertex2f(0.75, 0.5);
	glEnd();

	glBegin(GL_TRIANGLES); // боковая часть крыши
	glColor3ub(200, 100, 0);
	glVertex2f(0.75, 0.5);
	glColor3ub(200, 100, 0);
	glVertex2f(1, 0.4);
	glColor3ub(200, 0, 0);
	glVertex2f(1, 0.5);
	glEnd();
}
void Kvadrat(Figure& f) {
	glPushMatrix();
	glTranslatef(f.pos.x, f.pos.y, 0);
	glBegin(GL_QUADS); //квадрат за комбайном
	glColor3ub(200, 100, 0);
	glVertex2f(-10, -0.4);
	glVertex2f(-10, -0.599);
	glVertex2f(0.175, -0.4);
	glVertex2f(0.175, -0.599);
	glEnd();
	glPopMatrix();
}
void Kombain(Figure& f) {
	float x = 0.4;
	float y = -0.45;
	glPushMatrix();
	glTranslatef(f.pos.x, f.pos.y, 0);
	if (f.isRight) {
		glRotatef(180, 0, 1, 0);
	}
	if (f.isRight == false) {
		glRotatef(12, 0, 0, 1);
	}
	glTranslatef(-0.4, 0, 0);
	glBegin(GL_POLYGON); // основа
	glColor3ub(19, 19, 70);
	glVertex2f(x - 0.15, y + 0.1);
	glColor3ub(19, 19, 70);
	glVertex2f(x - 0.15, y - 0.1);
	glColor3ub(19, 19, 70);
	glVertex2f(x + 0.15, y - 0.1);
	glColor3ub(19, 19, 70);
	glVertex2f(x + 0.15, y + 0.04);
	glColor3ub(19, 19, 70);
	glVertex2f(x + 0.06, y + 0.1);
	glEnd();
	glBegin(GL_QUAD_STRIP); // кабина
	glColor3ub(19, 19, 100);
	glVertex2f(x - 0.23, y + 0.08);
	glColor3ub(19, 19, 100);
	glVertex2f(x - 0.20, y - 0.05);
	glColor3ub(19, 19, 100);
	glVertex2f(x - 0.14, y + 0.08);
	glColor3ub(19, 19, 100);
	glVertex2f(x - 0.14, y - 0.05);
	glEnd();
	glBegin(GL_TRIANGLES); // ковш
	glColor3ub(100, 100, 100);
	glVertex2f(x - 0.27, y - 0.13);
	glColor3ub(100, 100, 100);
	glVertex2f(x - 0.14, y - 0.03);
	glColor3ub(100, 100, 100);
	glVertex2f(x - 0.14, y - 0.13);
	glEnd();
	float r, t;
	float count = 30; // переднее колесо
	float l1 = 0.06;
	float a1 = M_PI * 2 / count;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(100, 100, 100);
	glVertex2f(x - 0.12, y - 0.1);
	for (int i = -1; i < count; i++) {
		r = sin(a1 * i) * l1;
		t = cos(a1 * i) * l1;
		glVertex2f(r + 0.28, t - 0.54);
	}
	glEnd();
	float c, d;
	float cnt = 30; // заднее колесо
	float l = 0.05;
	float a = M_PI * 2 / cnt;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(100, 100, 100);
	glVertex2f(x + 0.16, y - 0.1);
	for (int i = -1; i < cnt; i++) {
		c = sin(a * i) * l;
		d = cos(a * i) * l;
		glVertex2f(c + 0.55, d - 0.55);
	}
	glEnd();
	glBegin(GL_QUADS); // длинная часть трубы
	glColor3ub(19, 19, 19);
	glVertex2f(x - 0.12, y + 0.08);
	glColor3ub(19, 19, 19);
	glVertex2f(x - 0.12, y + 0.068);
	glColor3ub(19, 19, 19);
	glVertex2f(x + 0.15, y + 0.068);
	glColor3ub(19, 19, 19);
	glVertex2f(x + 0.15, y + 0.08);
	glEnd();
	glBegin(GL_QUADS); // короткая часть трубы
	glColor3ub(19, 19, 19);
	glVertex2f(x + 0.14, y + 0.08);
	glColor3ub(19, 19, 19);
	glVertex2f(x + 0.17, y + 0.047);
	glColor3ub(19, 19, 19);
	glVertex2f(x + 0.19, y + 0.047);
	glColor3ub(19, 19, 19);
	glVertex2f(x + 0.16, y + 0.08);
	glEnd();
	glPopMatrix();
}
void background2(void) {
	float x = 0;
	float y = 0;
	glBegin(GL_POLYGON); // небо
	glColor3ub(125, 250, 255);
	glVertex2f(x-1, y+1);
	glVertex2f(x-1, y+0.7);
	glVertex2f(x+1, y+0.7);
	glVertex2f(x+1, y+1);
	glEnd();

	glBegin(GL_QUAD_STRIP);// поле
	glColor3ub(50, 100, 0);
	glVertex2f(x-1, y+0.7);
	glColor3ub(100, 100, 0);
	glVertex2f(x-1, y-1);
	glColor3ub(100, 100, 0);
	glVertex2f(x+1, y+0.7);
	glColor3ub(200, 200, 0);
	glVertex2f(x+1, y-1);
	glEnd();
	

	glBegin(GL_QUADS); // доорога
	glColor3ub(237, 240, 57);
	glVertex2f(x - 1, y + 0.3);
	glColor3ub(237, 240, 57);
	glVertex2f(x - 1, y - 0.3);
	glColor3ub(232, 194, 8);
	glVertex2f(x + 1, y -0.3);
	glColor3ub(232, 194, 8);
	glVertex2f(x + 1, y +0.3);
	glEnd();

	glBegin(GL_QUADS); //забор
	x = -1;
	glColor3ub(61, 43, 31);
	glVertex2f(x, y + 0.8);
	glVertex2f(x, y + 0.75);
	glVertex2f(x+2, y + 0.75);
	glVertex2f(x+2, y + 0.8);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(152, 118, 84);
	x = -0.98;
	for (int i = 0; i < 20; i++) {
		glVertex2f(x, y + 0.85);
		glVertex2f(x, y + 0.7);
		glVertex2f(x + 0.07, y + 0.7);
		glVertex2f(x + 0.07, y + 0.85);
		x += 0.1;
	}
	glEnd();
	x = 0;
	y = 0;
	float c, d;// Куст 
	float cnt = 30; 
	float l = 0.05;
	float a = M_PI * 2 / cnt;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(103, 254, 5);
	glVertex2f(x - 0.7, y+ 0.4);
		for (int i = -1; i < cnt; i++) {
			c = sin(a * i) * l;
			d = cos(a * i) * l;
			glVertex2f(c - 0.8, d+0.5);
		}
		glEnd();
	x = 0;
	y = 0;
	float c1, d1;
	float cnt1 = 30;
	float l1 = 0.07;
	float a1 = M_PI * 2 / cnt1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(103, 254, 5);
	glVertex2f(x - 0.7, y + 0.4);
	for (int i = -1; i < cnt1; i++) {
		c1 = sin(a1 * i) * l1;
		d1 = cos(a1 * i) * l1;
		glVertex2f(c1 - 0.7, d1 + 0.55);
	}
	glEnd();
	x = 0;
	y = 0;
	float c2, d2;
	float cnt2 = 30;
	float l2 = 0.05;
	float a2 = M_PI * 2 / cnt2;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(103, 254, 5);
	glVertex2f(x - 0.7, y + 0.4);
	for (int i = -1; i < cnt2; i++) {
		c2 = sin(a2 * i) * l2;
		d2 = cos(a2 * i) * l2;
		glVertex2f(c2 - 0.6, d2 + 0.5);
	}
	glEnd();

	
}
void Car(Figure& carF) {
	glPushMatrix();
	glTranslatef(carF.pos.x, carF.pos.y, 0);
	float x = 0;
	float y = 0;
	glBegin(GL_QUADS); //основа
	glColor3ub(149, 84, 16);
	glVertex2f(x, y + 0.17);
	glVertex2f(x, y);
	glVertex2f(x + 0.5, y);
	glVertex2f(x + 0.5, y+0.17);
	glEnd();

	glBegin(GL_LINES);//кузов
	glColor3ub(100, 96, 92);
	for (int i = 0; i < 5; i++) {
		glVertex2f(x+0.12, y + 0.23);
		glVertex2f(x+0.12, y+0.17);
		x += 0.095;
	}
	glVertex2f(x-0.357, y + 0.23);
	glVertex2f(x + 0.03, y + 0.23);
	glEnd();
	x = 0; 
	y = 0;
	glBegin(GL_QUADS); //кабина
	glColor3ub(37, 36, 34);
	glVertex2f(x+0.01, y + 0.14);
	glVertex2f(x+0.01, y+0.07);
	glVertex2f(x + 0.06, y+0.07);
	glVertex2f(x + 0.06, y + 0.14);
	glEnd();
	x = 0;
	y = 0;
	float r, t;
	float count = 30; // переднее колесо
	float l1 = 0.05;
	float a1 = M_PI * 2 / count;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0, 0, 0);
	glVertex2f(x+0.1, y);
	for (int i = -1; i < count; i++) {
		r = sin(a1 * i) * l1;
		t = cos(a1 * i) * l1;
		glVertex2f(r+0.1, t);
	}
	glEnd();
	float c, d;
	float cnt = 30; // заднее колесо
	float l = 0.05;
	float a = M_PI * 2 / cnt;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0, 0, 0);
	glVertex2f(x + 0.4, y);
	for (int i = -1; i < cnt; i++) {
		c = sin(a * i) * l;
		d = cos(a * i) * l;
		glVertex2f(c+0.4, d);
	}
	glEnd();
	glPopMatrix();
}
void Flowers(void) {
	float x = 0;
	float y = 0;
	float x1 = 0;
	float y1 = 0;

	for (int i = 0; i < 9; i++) {
		glBegin(GL_LINES);//стебель
		glColor3ub(19, 72, 8);
		glVertex2f(x - 0.8, y - 0.8);
		glVertex2f(x - 0.8, y - 1);
		glEnd();

		glBegin(GL_QUADS); //лист левый
		glColor3ub(19, 72, 8);
		glVertex2f(x - 0.85, y - 0.85);
		glVertex2f(x - 0.8, y - 1);
		glVertex2f(x - 0.8, y - 0.92);
		glVertex2f(x - 0.83, y - 0.86);
		glEnd();

		glBegin(GL_QUADS); //лист правый
		glColor3ub(19, 72, 8);
		glVertex2f(x - 0.75, y - 0.85);
		glVertex2f(x - 0.8, y - 1);
		glVertex2f(x - 0.8, y - 0.92);
		glVertex2f(x - 0.77, y - 0.86);
		glEnd();
		float r1 = 0.8;
		float r2 = 0.9;
		float r3 = 0.8;
		int r = 134;
		int g = 34;
		int b = 190;
		for (int k = 0; k < 9; k++) {
			float cnt = 20;
			float l = 0.05;
			float a = M_PI * 2 / cnt;
			glBegin(GL_TRIANGLE_FAN);
			glColor3ub(r, g, b);
			glVertex2f(x1 - r1, y1 - 0.8);
			for (int j = -1; j < cnt; j++) {
				x1 = sin(a * j) * l;
				y1 = cos(a * j) * l;
				glVertex2f(x1 - r3, y1 - 0.8);
			}
			glEnd();
			r1 -= 0.2;
			r3 -= 0.2;
			r += 10;
			g += 10;
			b += 5;

		}
		x += 0.2;
	}
	
}
void stogi(void) {
	float x = 0;
	float y = 0.5;
	glBegin(GL_POLYGON);//стог сена 1
	glColor3ub(46, 75, 27);
	glVertex2f(x + 0.1, y + 0.1);
	glVertex2f(x + 0.08, y + 0.08);
	glVertex2f(x + 0.08, y + 0.01);
	glVertex2f(x + 0.1, y -0.01);
	glVertex2f(x + 0.3, y -0.01);
	glVertex2f(x + 0.32, y + 0.01);
	glVertex2f(x + 0.32, y + 0.08);
	glVertex2f(x + 0.3, y + 0.1);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(100, 100, 100);
		glVertex2f(x + 0.12, y + 0.1);
		glVertex2f(x + 0.12, y - 0.01);
		glVertex2f(x + 0.27, y + 0.1);
		glVertex2f(x + 0.27, y - 0.01);
		glEnd();
	x = 0.26;
	y = 0.5;
		glBegin(GL_POLYGON);//стог сена 2
		glColor3ub(46, 75, 27);
		glVertex2f(x + 0.1, y + 0.1);
		glVertex2f(x + 0.08, y + 0.08);
		glVertex2f(x + 0.08, y + 0.01);
		glVertex2f(x + 0.1, y - 0.01);
		glVertex2f(x + 0.3, y - 0.01);
		glVertex2f(x + 0.32, y + 0.01);
		glVertex2f(x + 0.32, y + 0.08);
		glVertex2f(x + 0.3, y + 0.1);
		glEnd();
		glBegin(GL_LINES);
		glColor3ub(100, 100, 100);
		glVertex2f(x + 0.12, y + 0.1);
		glVertex2f(x + 0.12, y - 0.01);
		glVertex2f(x + 0.27, y + 0.1);
		glVertex2f(x + 0.27, y - 0.01);
		glEnd();
		x = 0.13;
		y = 0.6;
		glBegin(GL_POLYGON);//стог сена 3
		glColor3ub(46, 75, 27);
		glVertex2f(x + 0.1, y + 0.1);
		glVertex2f(x + 0.08, y + 0.08);
		glVertex2f(x + 0.08, y + 0.01);
		glVertex2f(x + 0.1, y - 0.01);
		glVertex2f(x + 0.3, y - 0.01);
		glVertex2f(x + 0.32, y + 0.01);
		glVertex2f(x + 0.32, y + 0.08);
		glVertex2f(x + 0.3, y + 0.1);
		glEnd();
		glBegin(GL_LINES);
		glColor3ub(100, 100, 100);
		glVertex2f(x + 0.12, y + 0.1);
		glVertex2f(x + 0.12, y - 0.01);
		glVertex2f(x + 0.27, y + 0.1);
		glVertex2f(x + 0.27, y - 0.01);
		glEnd();
}
void StogKvadrat(Figure& StogF) {
	glPushMatrix();
	glTranslatef(StogF.pos.x, StogF.pos.y, 0);
	float x = 0;
	float y = 0;
	glScalef(0.3, 0.3, 0);
	glBegin(GL_QUADS);
	glColor3ub(12, 110, 4);
	glVertex2f(x, y);
	glVertex2f(x-0.1, y-0.1);
	glVertex2f(x, y-0.1);
	glVertex2f(x +0.1, y);
	glEnd();
	glPopMatrix();
}
Figure kombainF = { {1,0.8}, false, 100 };
Figure carF ={ { 1,-0.1 }, false, 100};
Figure kombainF2 = {{ -1,0.6 }, true, 100};
Figure StogF = { {-0.085, 0.205}, false,100 };
Figure carF2 = { { -0.5,-0.1 }, false, 100 };
Figure kombainF3 = { { 0.1,0.6 }, true, 100 };
