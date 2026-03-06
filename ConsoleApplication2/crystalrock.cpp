#include "crystalrock.h"
#include "shapes.h"

void drawCrystalRock(float x, float y, float z, float scale)
{
    glPushMatrix();
    glTranslatef(x, y, 0);
    glScalef(scale, scale, 1);

    glColor3f(0.38f, 0.85f, 0.98f);

    glBegin(GL_POLYGON);
    glVertex3f(-0.8f, -0.9f, z);
    glVertex3f(-1.0f, 0.1f, z);
    glVertex3f(-0.4f, 1.1f, z);
    glVertex3f(0.7f, 0.5f, z);
    glVertex3f(0.9f, -0.8f, z);
    glEnd();

    glPopMatrix();
}