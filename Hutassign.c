#include <GL/glut.h>

void drawHut() {
   
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.4f, 0.2f); 
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(-0.5, 0.5);
    glEnd();

    
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); 
    glVertex2f(-0.5, 0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(0.0, 1.0);
    glEnd();

    
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.2f, 0.0f); 
    glVertex2f(-0.2, -0.5);
    glVertex2f(0.2, -0.5);
    glVertex2f(0.2, 0.0);
    glVertex2f(-0.2, 0.0);
    glEnd();

        glBegin(GL_QUADS);
    glColor3f(0.4f, 0.8f, 1.0f); 
    glVertex2f(-0.4, 0.2);
    glVertex2f(-0.3, 0.2);
    glVertex2f(-0.3, 0.4);
    glVertex2f(-0.4, 0.4);

    glVertex2f(0.3, 0.2);
    glVertex2f(0.4, 0.2);
    glVertex2f(0.4, 0.4);
    glVertex2f(0.3, 0.4);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    drawHut();

    glFlush();
}

void reshape(int width, int height) {
    glViewport(0, 0, (GLsizei)width, (GLsizei)height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("HUT HOUSE");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glClearColor(1.0, 0.0, 1.0, 0.0); 

    glutMainLoop();

    return 0;
}
