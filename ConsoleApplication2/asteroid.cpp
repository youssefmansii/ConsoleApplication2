#include "asteroid.h"
#include "shapes.h"

void drawAsteroid(float x, float y, float z, float scale) {
    glPushMatrix();
    glTranslatef(x, y, 0.0f);
    glScalef(scale, scale, 1.0f);

    glColor3f(0.66f, 0.45f, 0.28f);
    glBegin(GL_POLYGON);
    glVertex3f(-1.6f, -0.4f, z);
    glVertex3f(-1.3f, 0.5f, z);
    glVertex3f(-0.7f, 1.1f, z);
    glVertex3f(0.2f, 1.0f, z);
    glVertex3f(0.9f, 0.5f, z);
    glVertex3f(1.2f, -0.2f, z);
    glVertex3f(0.9f, -1.0f, z);
    glVertex3f(0.1f, -1.2f, z);
    glVertex3f(-0.8f, -1.0f, z);
    glVertex3f(-1.4f, -0.7f, z);
    glEnd();

    glColor3f(0.50f, 0.32f, 0.20f);
    drawFilledCircle(-0.7f, 0.1f, z + 0.01f, 0.28f, 30);
    drawFilledCircle(0.2f, 0.35f, z + 0.01f, 0.20f, 30);
    drawFilledCircle(0.4f, -0.45f, z + 0.01f, 0.24f, 30);

    glColor3f(0.80f, 0.60f, 0.40f);
    drawEllipse(-0.2f, 0.75f, z + 0.02f, 0.40f, 0.12f, 30);

    glPopMatrix();
}