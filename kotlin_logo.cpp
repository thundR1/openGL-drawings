#include <GL/glut.h>
#include <stdlib.h>

void disp(void) {
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(177.0/255, 37.0/255, 234.0/255);
        glVertex2f(-0.5, 0.5);
        glColor3f(226.0/255, 68.0/255, 98.0/255);
        glVertex2f(0.5, 0.5);
        glColor3f(127.0/255, 82.0/255, 255.0/255);
        glVertex2f(-0.5, -0.5);
        glColor3f(0, 0, 0);
        glVertex2f(0.5, -0.5);
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(470, 150);
    glutInitWindowSize(512, 512);
    glutCreateWindow("Kotlin Logo");

    glutDisplayFunc(disp);
    glutMainLoop();
    return 0;
}
