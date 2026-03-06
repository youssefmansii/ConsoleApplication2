#include <GL/glut.h>

#include "background.h"
#include "player.h"
#include "ufo.h"
#include "asteroid.h"
#include "spikedmine.h"
#include "lasergate.h"
#include "crystalrock.h"

bool usePerspective = false;

void setProjection(int w, int h) {
    if (h == 0) h = 1;
    float aspect = (float)w / (float)h;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    if (usePerspective) {
        gluPerspective(60.0, aspect, 1.0, 30.0);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        gluLookAt(0.0, 0.0, 8.0,
            0.0, 0.0, -5.0,
            0.0, 1.0, 0.0);
    }
    else {
        if (aspect >= 1.0f) {
            glOrtho(-10.0 * aspect, 10.0 * aspect, -10.0, 10.0, 1.0, 30.0);
        }
        else {
            glOrtho(-10.0, 10.0, -10.0 / aspect, 10.0 / aspect, 1.0, 30.0);
        }
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        gluLookAt(0.0, 0.0, 8.0,
            0.0, 0.0, -5.0,
            0.0, 1.0, 0.0);
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    gluLookAt(0.0, 0.0, 8.0,
        0.0, 0.0, -5.0,
        0.0, 1.0, 0.0);

    drawBackgroundSky();
    drawNebula(-5.5f, 5.0f, -8.8f);
    // drawNebula(5.8f, 5.4f, -8.7f);
    drawStars();
    drawMoon();
    drawPlanet();

    // drawUFO(-3.5f, 4.0f, -5.0f, false);
    drawUFO(6.0f, 4.2f, -5.2f, true);

    drawAsteroid(-7.2f, 1.0f, -5.0f, 0.95f);
    drawSpikedMine(1.0f, 4.0f, -4.8f, 0.85f);
    drawLaserGate(6.8f, -2.2f, -4.7f, 0.9f);
    drawCrystalRock(-4.8f, -2.2f, -5.4f, 0.95f);

    drawForegroundPlanetSurface();
    drawPlayerShip();

    glutSwapBuffers();
}

void keyboard(unsigned char key, int, int) {
    if (key == 'o' || key == 'O') {
        usePerspective = false;
        setProjection(glutGet(GLUT_WINDOW_WIDTH), glutGet(GLUT_WINDOW_HEIGHT));
        glutPostRedisplay();
    }
    else if (key == 'p' || key == 'P') {
        usePerspective = true;
        setProjection(glutGet(GLUT_WINDOW_WIDTH), glutGet(GLUT_WINDOW_HEIGHT));
        glutPostRedisplay();
    }
    else if (key == 27) {
        exit(0);
    }
}

void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    setProjection(w, h);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(1200, 800);
    glutCreateWindow("Static 2D Arcade Scene - Orthographic / Perspective");

    glEnable(GL_DEPTH_TEST);
    glClearColor(0.02f, 0.02f, 0.08f, 1.0f);

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(reshape);

    setProjection(1200, 800);
    glutMainLoop();
    return 0;
}