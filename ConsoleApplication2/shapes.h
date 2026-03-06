#pragma once
#include <GL/glut.h>

extern const float PI;

void drawFilledCircle(float cx, float cy, float cz, float r, int segments = 100);
void drawEllipse(float cx, float cy, float cz, float rx, float ry, int segments = 100);
void drawRect(float x1, float y1, float x2, float y2, float z);
void drawTriangle(float x1, float y1, float x2, float y2, float x3, float y3, float z);
void drawStar(float x, float y, float z, float s);
void drawSmallDot(float x, float y, float z, float r);