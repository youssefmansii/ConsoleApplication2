#include "player.h"
#include "shapes.h"

void drawPlayerShip()
{
    float z = -2;

    glColor3f(0.82f, 0.86f, 0.92f);
    drawRect(-0.45f, -6.4f, 0.45f, -5.2f, z);

    glColor3f(0.87f, 0.90f, 0.95f);
    drawTriangle(-0.45f, -5.2f, 0.45f, -5.2f, 0, -4.4f, z);

    glColor3f(0.95f, 0.97f, 1);
    drawRect(-0.18f, -5.9f, 0.18f, -5, z + 0.01f);
}