// C program to demonstrate
// drawing a circle using
// OpenGL
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
#define DEG2RAD pi/180.0

// function to initialize
void myInit(void)
{
    // making background color black as first
    // 3 arguments all are 0.0
    glClearColor(0.0, 0.0, 0.0, 1.0);

}
void DrawEllipse(float radiusX, float radiusY)
{
    int i;
 
    glBegin(GL_POLYGON);

    for (i = 0; i < 360; i++)
    {
        float rad = i * DEG2RAD;
        glVertex2f(cos(rad) * radiusX,
            sin(rad) * radiusY);
    }

    glEnd();
}
void display(void)
{
    //BODY OF THE SPIDER
    glClear(GL_COLOR_BUFFER_BIT);
    DrawEllipse(0.2f, 0.3f);
    glLoadIdentity();
    glTranslatef(0.0f, 0.3f, 0.0f);
    DrawEllipse(0.1f, 0.1f);

    //HANDS???
    //--------------------------------------
    glLineWidth(7);
    //right1
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.1f, -0.1f);
    glVertex2f(0.2f, 0.0f);
    glVertex2f(0.15f, 0.05f);
    glEnd();
    //right2
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0f, -0.3f);
    glVertex2f(0.3f, -0.1f);
    glVertex2f(0.38f, -0.2f);
    glEnd();
    //right3
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0f, -0.4f);
    glVertex2f(0.37f, -0.26f);
    glVertex2f(0.5f, -0.45f);
    glEnd();
    //right4
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0f, -0.5f);
    glVertex2f(0.37f, -0.46f);
    glVertex2f(0.5f, -0.65f);
    glEnd();
    //left1
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.1f, -0.1f);
    glVertex2f(-0.2f, 0.0f);
    glVertex2f(-0.15f, 0.05f);
    glEnd();
    //left2 
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0f, -0.3f);
    glVertex2f(-0.3f, -0.1f);
    glVertex2f(-0.38f, -0.2f);
    glEnd();
    //left3
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0f, -0.4f);
    glVertex2f(-0.37f, -0.26f);
    glVertex2f(-0.5f, -0.45f);
    glEnd();
    //left4
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0f, -0.5f);
    glVertex2f(-0.37f, -0.46f);
    glVertex2f(-0.5f, -0.65f);
    glEnd();
    //--------------------------------------
    //WEB
    //--------------------------------------
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-1.0f, 0.5f);
    glVertex2f(-0.9f, 0.55f);
    glVertex2f(-1.3f, 1.0f);

    glVertex2f(-0.9f, 0.55f);
    glVertex2f(-0.9f, 0.8f);
    glVertex2f(-0.9f, 0.55f);

    glVertex2f(-0.8f, 0.45f);
    glVertex2f(-0.8f, 1.0f);
    glVertex2f(-0.8f, 0.45f);

    glVertex2f(-1.0f, 0.35f);
    glVertex2f(-0.8f, 0.45f);
    glVertex2f(-0.6f, 0.25f);

    glVertex2f(-0.65f, 0.3f);
    glVertex2f(-1.0f, 0.15f);
    glVertex2f(-0.65f, 0.3f);

    glVertex2f(-0.65f, 1.0f);

    glEnd();

    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.5f, 0.5f);
    glVertex2f(-1.5f, 1.0f);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.7f, 0.0f);
    glVertex2f(-1.35f, 1.0f);
    glEnd();

    //--------------------------------------
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(1130, 0);
    glutCreateWindow("Spider");
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    // glRotatef(45, 0, 0, 1);
    //glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
    glutDisplayFunc(display);
    glutMainLoop();
}