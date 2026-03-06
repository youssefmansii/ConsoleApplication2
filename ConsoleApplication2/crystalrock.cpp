#include "crystalrock.h"
#include "shapes.h"

void drawCrystalRock(float x, float y, float z, float scale) {
    glPushMatrix();
    glTranslatef(x, y, 0.0f);
    glScalef(scale, scale, 1.0f);

    glColor3f(0.38f, 0.85f, 0.98f);
    glBegin(GL_POLYGON);
    glVertex3f(-0.8f, -0.9f, z);
    glVertex3f(-1.0f, 0.1f, z);
    glVertex3f(-0.4f, 1.1f, z);
    glVertex3f(0.1f, 1.4f, z);
    glVertex3f(0.7f, 0.5f, z);
    glVertex3f(0.9f, -0.8f, z);
    glEnd();

    glColor3f(0.75f, 0.96f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex3f(-0.2f, -0.8f, z + 0.01f);
    glVertex3f(-0.1f, 1.2f, z + 0.01f);
    glVertex3f(0.25f, 1.0f, z + 0.01f);
    glVertex3f(0.35f, -0.7f, z + 0.01f);
    glEnd();

    glColor3f(0.22f, 0.62f, 0.82f);
    drawTriangle(-0.8f, -0.9f, -0.2f, -0.8f, -0.4f, 1.1f, z + 0.02f);

    glPopMatrix();
}