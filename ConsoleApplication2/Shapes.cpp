#include "shapes.h"
#include <cmath>

const float PI = 3.14159265358979323846f;

void drawFilledCircle(float cx, float cy, float cz, float r, int segments) {
    glBegin(GL_TRIANGLE_FAN);
    glVertex3f(cx, cy, cz);
    for (int i = 0; i <= segments; i++) {
        float theta = 2.0f * PI * i / segments;
        float x = cx + r * cos(theta);
        float y = cy + r * sin(theta);
        glVertex3f(x, y, cz);
    }
    glEnd();
}

void drawEllipse(float cx, float cy, float cz, float rx, float ry, int segments) {
    glBegin(GL_TRIANGLE_FAN);
    glVertex3f(cx, cy, cz);
    for (int i = 0; i <= segments; i++) {
        float theta = 2.0f * PI * i / segments;
        float x = cx + rx * cos(theta);
        float y = cy + ry * sin(theta);
        glVertex3f(x, y, cz);
    }
    glEnd();
}

void drawRect(float x1, float y1, float x2, float y2, float z) {
    glBegin(GL_QUADS);
    glVertex3f(x1, y1, z);
    glVertex3f(x2, y1, z);
    glVertex3f(x2, y2, z);
    glVertex3f(x1, y2, z);
    glEnd();
}

void drawTriangle(float x1, float y1, float x2, float y2, float x3, float y3, float z) {
    glBegin(GL_TRIANGLES);
    glVertex3f(x1, y1, z);
    glVertex3f(x2, y2, z);
    glVertex3f(x3, y3, z);
    glEnd();
}

void drawStar(float x, float y, float z, float s) {
    glBegin(GL_TRIANGLES);
    glVertex3f(x, y + s, z);
    glVertex3f(x - s * 0.25f, y, z);
    glVertex3f(x + s * 0.25f, y, z);

    glVertex3f(x, y - s, z);
    glVertex3f(x - s * 0.25f, y, z);
    glVertex3f(x + s * 0.25f, y, z);

    glVertex3f(x - s, y, z);
    glVertex3f(x, y - s * 0.25f, z);
    glVertex3f(x, y + s * 0.25f, z);

    glVertex3f(x + s, y, z);
    glVertex3f(x, y - s * 0.25f, z);
    glVertex3f(x, y + s * 0.25f, z);
    glEnd();
}

void drawSmallDot(float x, float y, float z, float r) {
    drawFilledCircle(x, y, z, r, 24);
}