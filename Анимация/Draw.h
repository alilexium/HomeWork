#pragma once
#include "GL/freeglut.h"

struct Position {
	GLfloat x, y;
};

struct Figure {
	Position pos;
	bool isRight;
	GLfloat health;

};

// блок объявлений функций
void renderScene(void);
void Polya_Nebo(void);
void Ambar(void);
void Oblako();
void Trava(void);
void Trees(void);
void Kombain(Figure& f);
void animate(int value);
void background2(void);
void Car(Figure& carF);
void Flowers(void);
void stogi(void);
void StogKvadrat(Figure& StogF);

extern Figure kombainF;
extern Figure carF;
extern Figure kombainF2;
extern Figure StogF;
extern Figure kombainF3;
extern Figure carF2;
