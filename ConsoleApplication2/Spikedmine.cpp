#include "spikedmine.h"
#include "shapes.h"
#include <cmath>

void drawSpikedMine(float x, float y, float z, float scale)
{
    glPushMatrix();
    glTranslatef(x, y, 0);
    glScalef(scale, scale, 1);

    glColor3f(0.72f, 0.16f, 0.20f);

    for (int i = 0;i < 8;i++)
    {
        float a = i * 3.14159f / 4;
        glBegin(GL_TRIANGLES);
        glVertex3f(cos(a) * 1.1f, sin(a) * 1.1f, z);
        glVertex3f(cos(a + 0.2f) * 0.5f, sin(a + 0.2f) * 0.5f, z);
        glVertex3f(cos(a - 0.2f) * 0.5f, sin(a - 0.2f) * 0.5f, z);
        glEnd();
    }

    glColor3f(0.45f, 0.45f, 0.52f);
    drawFilledCircle(0, 0, z, 0.6f);

    glPopMatrix();
}