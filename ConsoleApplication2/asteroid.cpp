#include "asteroid.h"
#include "shapes.h"

void drawAsteroid(float x, float y, float z, float scale)
{
    glPushMatrix();
    glTranslatef(x, y, 0);
    glScalef(scale, scale, 1);

    glColor3f(0.66f, 0.45f, 0.28f);

    glBegin(GL_POLYGON);
    glVertex3f(-1, -0.5, z);
    glVertex3f(-0.5, 1, z);
    glVertex3f(1, 0.5, z);
    glVertex3f(0.8, -1, z);
    glVertex3f(-0.5, -1, z);
    glEnd();

    glPopMatrix();
}