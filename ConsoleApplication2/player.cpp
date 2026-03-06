#include "player.h"
#include "shapes.h"

void drawPlayerShip() {
    float z = -2.0f;

    glColor3f(0.82f, 0.86f, 0.92f);
    drawRect(-0.45f, -6.4f, 0.45f, -5.2f, z);

    glColor3f(0.87f, 0.90f, 0.95f);
    drawTriangle(-0.45f, -5.2f, 0.45f, -5.2f, 0.0f, -4.4f, z);

    glColor3f(0.95f, 0.97f, 1.0f);
    drawRect(-0.18f, -5.9f, 0.18f, -5.0f, z + 0.01f);

    glColor3f(0.12f, 0.35f, 0.82f);
    drawRect(-0.14f, -5.75f, 0.14f, -5.15f, z + 0.02f);

    glColor3f(0.88f, 0.18f, 0.25f);
    drawFilledCircle(0.0f, -4.5f, z + 0.02f, 0.16f, 40);

    glColor3f(0.83f, 0.87f, 0.93f);
    drawRect(-1.1f, -6.2f, -0.45f, -5.2f, z);
    drawRect(0.45f, -6.2f, 1.1f, -5.2f, z);

    glColor3f(0.55f, 0.58f, 0.65f);
    drawRect(-0.62f, -5.95f, -0.45f, -5.4f, z + 0.01f);
    drawRect(0.45f, -5.95f, 0.62f, -5.4f, z + 0.01f);

    glColor3f(0.88f, 0.22f, 0.28f);
    drawRect(-1.1f, -6.2f, -0.76f, -5.0f, z + 0.02f);
    drawRect(0.76f, -6.2f, 1.1f, -5.0f, z + 0.02f);

    glColor3f(0.72f, 0.76f, 0.84f);
    drawTriangle(-1.1f, -5.2f, -1.55f, -5.8f, -1.1f, -6.0f, z + 0.01f);
    drawTriangle(1.1f, -5.2f, 1.55f, -5.8f, 1.1f, -6.0f, z + 0.01f);

    glColor3f(1.0f, 0.62f, 0.10f);
    drawTriangle(-0.28f, -6.4f, -0.05f, -6.4f, -0.16f, -7.05f, z);
    drawTriangle(0.05f, -6.4f, 0.28f, -6.4f, 0.16f, -7.05f, z);

    glColor3f(1.0f, 0.85f, 0.30f);
    drawTriangle(-0.22f, -6.4f, -0.09f, -6.4f, -0.16f, -6.82f, z + 0.01f);
    drawTriangle(0.09f, -6.4f, 0.22f, -6.4f, 0.16f, -6.82f, z + 0.01f);
}