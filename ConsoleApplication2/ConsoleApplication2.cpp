#include <GL/glut.h>

#include "background.h"
#include "player.h"
#include "asteroid.h"
#include "spikedmine.h"
#include "lasergate.h"
#include "crystalrock.h"

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    gluLookAt(0, 0, 8, 0, 0, -5, 0, 1, 0);

    drawBackgroundSky();
    drawStars();
    drawMoon();
    drawPlanet();

    drawAsteroid(-7, 1, -5, 1);
    drawSpikedMine(1, 4, -5, 1);
    drawLaserGate(6, -2, -5, 1);
    drawCrystalRock(-4, -2, -5, 1);

    drawForegroundPlanetSurface();
    drawPlayerShip();

    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(1200, 800);
    glutCreateWindow("Arcade Scene");

    glEnable(GL_DEPTH_TEST);

    glutDisplayFunc(display);

    glutMainLoop();
}