#include "background.h"
#include "shapes.h"


void drawBackgroundSky()
{
    glBegin(GL_QUADS);
    glColor3f(0.03f, 0.05f, 0.20f);
    glVertex3f(-10, -10, -10);
    glVertex3f(10, -10, -10);
    glColor3f(0, 0, 0.08f);
    glVertex3f(10, 10, -10);
    glVertex3f(-10, 10, -10);
    glEnd();
}

void drawStars()
{
    float z = -9;
    glColor3f(1, 1, 0.8f);
    drawStar(-8, 7, z, 0.2f);
    drawStar(-5, 6, z, 0.2f);
    drawStar(4, 6, z, 0.2f);
    drawStar(7, 7, z, 0.2f);
}

void drawMoon()
{
    float z = -7.5f;
    glColor3f(0.63f, 0.67f, 0.85f);
    drawFilledCircle(-1.5f, 0.7f, z, 0.6f);
}

void drawPlanet()
{
    float z = -7;
    glColor3f(0.30f, 0.70f, 0.95f);
    drawFilledCircle(3.7f, -3.2f, z, 1.7f);
}

void drawForegroundPlanetSurface()
{
    float z = -3;
    glColor3f(0.30f, 0.56f, 0.90f);
    drawFilledCircle(0, -12.5f, z, 11.5f, 200);
}
void drawNebula(float cx, float cy, float z) {
    glColor4f(0.45f, 0.20f, 0.70f, 1.0f);
    drawEllipse(cx, cy, z, 2.2f, 1.0f, 80);
    glColor4f(0.20f, 0.45f, 0.85f, 1.0f);
    drawEllipse(cx + 0.8f, cy + 0.2f, z + 0.01f, 1.6f, 0.7f, 80);
    glColor4f(0.90f, 0.35f, 0.65f, 1.0f);
    drawEllipse(cx - 0.6f, cy - 0.1f, z + 0.02f, 1.4f, 0.6f, 80);
}