#include "ufo.h"
#include "shapes.h"

void drawUFO(float cx, float cy, float z, bool greenLights) {
    glColor3f(0.36f, 0.78f, 0.98f);
    drawEllipse(cx, cy + 0.55f, z + 0.02f, 0.60f, 0.45f, 80);

    glColor3f(0.85f, 0.97f, 1.0f);
    drawEllipse(cx - 0.20f, cy + 0.75f, z + 0.03f, 0.18f, 0.10f, 50);

    glColor3f(0.90f, 0.18f, 0.32f);
    drawEllipse(cx, cy + 0.15f, z + 0.01f, 1.05f, 0.35f, 100);

    glColor3f(1.0f, 0.72f, 0.82f);
    drawFilledCircle(cx - 0.65f, cy + 0.14f, z + 0.02f, 0.05f, 24);
    drawFilledCircle(cx - 0.28f, cy + 0.16f, z + 0.02f, 0.05f, 24);
    drawFilledCircle(cx + 0.10f, cy + 0.15f, z + 0.02f, 0.05f, 24);
    drawFilledCircle(cx + 0.48f, cy + 0.13f, z + 0.02f, 0.05f, 24);

    glColor3f(0.62f, 0.66f, 0.72f);
    drawEllipse(cx, cy - 0.20f, z, 1.45f, 0.52f, 100);

    glColor3f(0.72f, 0.76f, 0.82f);
    for (int i = -4; i <= 4; i++) {
        float x = cx + i * 0.28f;
        drawRect(x - 0.10f, cy - 0.22f, x + 0.10f, cy - 0.03f, z + 0.01f);
    }

    if (greenLights)
        glColor3f(0.20f, 1.0f, 0.60f);
    else
        glColor3f(1.0f, 0.65f, 0.20f);

    drawFilledCircle(cx - 0.45f, cy - 0.72f, z + 0.01f, 0.10f, 24);
    drawFilledCircle(cx, cy - 0.75f, z + 0.01f, 0.10f, 24);
    drawFilledCircle(cx + 0.45f, cy - 0.72f, z + 0.01f, 0.10f, 24);
}