#include <windows.h>
#include <cmath>
#include <GL/glut.h> 

float _f(float x)
{
    return 10 * sqrt(x) * tan(x) * sin(2 * x);
}

float _fdx(float x)
{
    return cos(x) + 1 / x;
}
//y = sqrt(x)*tan(x)*sin(2*x)
void _os(float alfa)
{
    float d = 0.1;
    glRotated(alfa, 0, 0, 1);
    glBegin(GL_LINES);
    glVertex3f(-1, 0, 0);
    glVertex3f(1, 0, 0);
    glVertex3f(1, 0, 0);
    glVertex3f(1 - d, 0 + 0.02, 0);
    glVertex3f(1, 0, 0);
    glVertex3f(1 - d, 0 + 0.02, 0);
    glVertex3f(1, 0, 0);
    glVertex3f(1 - d, 0 - 0.02, 0);
    glVertex3f(1, 0, 0);
    glVertex3f(1 - d, 0 - 0.02, 0);
    glEnd();
}

void init(void)
{
    //Выбрать фоновый (очищающий) цвет
    glClearColor(1, 1, 1, 1);
    //Установить проекцию
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1, 1, -1, 1, -1, 1);
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glColor3f(0, 0, 0);
    _os(0);
    _os(90);

    glRotated(-90, 0, 0, 1);
    glScalef(0.1, 0.1, 0);
    //f(x)
    float y;
    glColor3f(0, 1, 1);
    glBegin(GL_LINE_STRIP);
    for (float i = 0; i <= 10; i += 0.001)
    {
        if (_fdx(i) <= 0.001 && _fdx(i) >= -0.001)
        {
            if (_fdx(i + 0.001) > 0)
                glColor3f(0, 1, 1);
            else
                glColor3f(0.0, 0.3, 0.1);
        }
        glVertex3f(i, _f(i), 0);
    }
    glEnd();
    //f'(x)  
    glColor3f(0.78, 0.08, 0.52);
    glBegin(GL_LINE_STRIP);
    for (float i = -10; i <= 0; i += 0.001)
    {
        y = _fdx(i);
        glVertex3f(i, y, 0);
    }
    glEnd();
    glBegin(GL_LINE_STRIP);
    for (float i = 0; i <= 10; i += 0.001)
    {
        y = _fdx(i);
        glVertex3f(i, y, 0);
    }
    glEnd();
    //точки
    glColor3f(1, 0.84, 0);
    glPointSize(7);
    for (float i = -10; i <= 10; i += 0.001)
    {
        y = _fdx(i);
        if (y <= 0.001 && y >= -0.001)
        {
            glBegin(GL_POINTS);
            glVertex3f(i, y, 0);
            glVertex3f(i, _f(i), 0);
            glEnd();
        }
    }

    glLoadIdentity();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(400, 50);
    glutCreateWindow("3 lab");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}