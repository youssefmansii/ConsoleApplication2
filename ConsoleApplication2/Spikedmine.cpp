#include "spikedmine.h"
#include "shapes.h"
#include <cmath>

void drawSpikedMine(float x, float y, float z, float scale) {
    glPushMatrix();
    glTranslatef(x, y, 0.0f);
    glScalef(scale, scale, 1.0f);

    glColor3f(0.72f, 0.16f, 0.20f);
    for (int i = 0; i < 8; i++) {
        float a = i * PI / 4.0f;
        float x1 = 0.0f + 1.15f * cos(a);
        float y1 = 0.0f + 1.15f * sin(a);
        float x2 = 0.0f + 0.55f * cos(a + 0.18f);
        float y2 = 0.0f + 0.55f * sin(a + 0.18f);
        float x3 = 0.0f + 0.55f * cos(a - 0.18f);
        float y3 = 0.0f + 0.55f * sin(a - 0.18f);

        glBegin(GL_TRIANGLES);
        glVertex3f(x1, y1, z);
        glVertex3f(x2, y2, z);
        glVertex3f(x3, y3, z);
        glEnd();
    }

    glColor3f(0.45f, 0.45f, 0.52f);
    drawFilledCircle(0.0f, 0.0f, z + 0.01f, 0.62f, 60);

    glColor3f(0.85f, 0.18f, 0.25f);
    drawFilledCircle(0.0f, 0.0f, z + 0.02f, 0.22f, 30);

    glColor3f(1.0f, 0.72f, 0.25f);
    drawFilledCircle(-0.18f, 0.16f, z + 0.03f, 0.06f, 20);
    drawFilledCircle(0.20f, -0.10f, z + 0.03f, 0.05f, 20);

    glPopMatrix();
}