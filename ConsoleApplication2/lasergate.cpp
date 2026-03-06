#include "lasergate.h"
#include "shapes.h"

void drawLaserGate(float x, float y, float z, float scale)
{
    glPushMatrix();
    glTranslatef(x, y, 0);
    glScalef(scale, scale, 1);

    glColor3f(0.45f, 0.48f, 0.58f);
    drawRect(-0.25f, -1.2f, 0.25f, 1.2f, z);
    drawRect(1.85f, -1.2f, 2.35f, 1.2f, z);

    glColor3f(1, 0, 0);
    drawRect(0.25f, 0.2f, 1.85f, 0.4f, z);

    glPopMatrix();
}