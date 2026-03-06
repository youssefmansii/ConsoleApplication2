#include "lasergate.h"
#include "shapes.h"

void drawLaserGate(float x, float y, float z, float scale) {
    glPushMatrix();
    glTranslatef(x, y, 0.0f);
    glScalef(scale, scale, 1.0f);

    glColor3f(0.45f, 0.48f, 0.58f);
    drawRect(-0.25f, -1.2f, 0.25f, 1.2f, z);
    drawRect(1.85f, -1.2f, 2.35f, 1.2f, z);

    glColor3f(0.70f, 0.75f, 0.82f);
    drawRect(-0.18f, -1.0f, 0.18f, 1.0f, z + 0.01f);
    drawRect(1.92f, -1.0f, 2.28f, 1.0f, z + 0.01f);

    glColor3f(1.0f, 0.12f, 0.28f);
    drawRect(0.25f, 0.65f, 1.85f, 0.88f, z + 0.02f);
    drawRect(0.25f, 0.10f, 1.85f, 0.33f, z + 0.02f);
    drawRect(0.25f, -0.45f, 1.85f, -0.22f, z + 0.02f);

    glColor3f(1.0f, 0.55f, 0.65f);
    drawRect(0.25f, 0.72f, 1.85f, 0.80f, z + 0.03f);
    drawRect(0.25f, 0.17f, 1.85f, 0.25f, z + 0.03f);
    drawRect(0.25f, -0.38f, 1.85f, -0.30f, z + 0.03f);

    glPopMatrix();
}