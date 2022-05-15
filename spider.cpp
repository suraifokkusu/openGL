#include "GL/glut.h"
#include <math.h>
#include <iostream>
#include <list>

#define pi 3.142857
#define DEG2RAD pi / 180.0
float constConvertFromPixelsToCords = 0.0005;
float constConvertFromCordsToPixel = 100;

using namespace std;

struct Spider
{
    float x, y;
    int r, g, b;
};
list<Spider> listSpider;
const float bodySize = 50;

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
}
void drawEllipse(float radiusX, float radiusY, list<Spider>::iterator iter)
{
    glBegin(GL_POLYGON);

    for (int i = 0; i < 360; i++)
    {
        float rad = i * DEG2RAD;
        glColor3ub(iter->r, iter->g, iter->b);
        glVertex2f(cos(rad) * radiusX + iter->x, sin(rad) * radiusY + iter->y);
    }
    // glLoadIdentity();
    glEnd();
}
void spiderBody(list<Spider>::iterator iter)
{
    glBegin(GL_POINTS);
    {
        glColor3ub(0.0f, 0.0f, 0.0f);
        glPointSize(bodySize); // квадрат тела
        glVertex2f(iter->x, iter->y);
    }
    glEnd();
    glColor3ub(iter->r, iter->g, iter->b);
    drawEllipse(0.2f * constConvertFromCordsToPixel, 0.3f * constConvertFromCordsToPixel, iter);
    glTranslatef(0.0f, 0.3f * constConvertFromCordsToPixel, 0.0f);
    drawEllipse(0.1f * constConvertFromCordsToPixel, 0.1f * constConvertFromCordsToPixel, iter);

    // glClear(GL_COLOR_BUFFER_BIT);
    // glTranslatef(xCordSpider * constConvertFromPixelsToCords, yCordSpider * constConvertFromPixelsToCords, 0.0f);
}
void spiderHands(list<Spider>::iterator iter)
{

    // glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(iter->r, iter->g, iter->b);
    glTranslatef(iter->x, iter->y, 0.0f);
    // HANDS???
    //--------------------------------------
    glLineWidth(7);
    // right1
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.1f * constConvertFromCordsToPixel, -0.1f * constConvertFromCordsToPixel);
    glVertex2f(0.2f * constConvertFromCordsToPixel, 0.0f * constConvertFromCordsToPixel);
    glVertex2f(0.15f * constConvertFromCordsToPixel, 0.05f * constConvertFromCordsToPixel);
    glEnd();
    // right2
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0f * constConvertFromCordsToPixel, -0.3f * constConvertFromCordsToPixel);
    glVertex2f(0.3f * constConvertFromCordsToPixel, -0.1f * constConvertFromCordsToPixel);
    glVertex2f(0.38f * constConvertFromCordsToPixel, -0.2f * constConvertFromCordsToPixel);
    glEnd();
    // right3
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0f * constConvertFromCordsToPixel, -0.4f * constConvertFromCordsToPixel);
    glVertex2f(0.37f * constConvertFromCordsToPixel, -0.26f * constConvertFromCordsToPixel);
    glVertex2f(0.5f * constConvertFromCordsToPixel, -0.45f * constConvertFromCordsToPixel);
    glEnd();
    // right4
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0f * constConvertFromCordsToPixel, -0.5f * constConvertFromCordsToPixel);
    glVertex2f(0.37f * constConvertFromCordsToPixel, -0.46f * constConvertFromCordsToPixel);
    glVertex2f(0.5f * constConvertFromCordsToPixel, -0.65f * constConvertFromCordsToPixel);
    glEnd();
    // left1
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.1f * constConvertFromCordsToPixel, -0.1f * constConvertFromCordsToPixel);
    glVertex2f(-0.2f * constConvertFromCordsToPixel, 0.0f * constConvertFromCordsToPixel);
    glVertex2f(-0.15f * constConvertFromCordsToPixel, 0.05f * constConvertFromCordsToPixel);
    glEnd();
    // left2
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0f * constConvertFromCordsToPixel, -0.3f * constConvertFromCordsToPixel);
    glVertex2f(-0.3f * constConvertFromCordsToPixel, -0.1f * constConvertFromCordsToPixel);
    glVertex2f(-0.38f * constConvertFromCordsToPixel, -0.2f * constConvertFromCordsToPixel);
    glEnd();
    // left3
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0f * constConvertFromCordsToPixel, -0.4f * constConvertFromCordsToPixel);
    glVertex2f(-0.37f * constConvertFromCordsToPixel, -0.26f * constConvertFromCordsToPixel);
    glVertex2f(-0.5f * constConvertFromCordsToPixel, -0.45f * constConvertFromCordsToPixel);
    glEnd();
    // left4
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0f * constConvertFromCordsToPixel, -0.5f * constConvertFromCordsToPixel);
    glVertex2f(-0.37f * constConvertFromCordsToPixel, -0.46f * constConvertFromCordsToPixel);
    glVertex2f(-0.5f * constConvertFromCordsToPixel, -0.65f * constConvertFromCordsToPixel);
    glEnd();

    glTranslatef(-iter->x, -iter->y, 0.0f);
    glTranslatef(0.0f, -0.3f * constConvertFromCordsToPixel, 0.0f);
}
// void web() {
//	glColor3ub(1.0f, 1.0f, 1.0f);
//	glLineWidth(5);
//	glBegin(GL_LINE_STRIP);
//	glVertex2f(-1.0f, 0.5f);
//	glVertex2f(-0.9f, 0.55f);
//	glVertex2f(-1.3f, 1.0f);
//
//	glVertex2f(-0.9f, 0.55f);
//	glVertex2f(-0.9f, 0.8f);
//	glVertex2f(-0.9f, 0.55f);
//
//	glVertex2f(-0.8f, 0.45f);
//	glVertex2f(-0.8f, 1.0f);
//	glVertex2f(-0.8f, 0.45f);
//
//	glVertex2f(-1.0f, 0.35f);
//	glVertex2f(-0.8f, 0.45f);
//	glVertex2f(-0.6f, 0.25f);
//
//	glVertex2f(-0.65f, 0.3f);
//	glVertex2f(-1.0f, 0.15f);
//	glVertex2f(-0.65f, 0.3f);
//
//	glVertex2f(-0.65f, 1.0f);
//
//	glEnd();
//
//	glBegin(GL_LINE_STRIP);
//	glVertex2f(-0.5f, 0.5f);
//	glVertex2f(-1.5f, 1.0f);
//	glEnd();
//
//	glBegin(GL_LINE_STRIP);
//	glVertex2f(-0.7f, 0.0f);
//	glVertex2f(-1.35f, 1.0f);
//	glEnd();
// }
void spider(list<Spider>::iterator iter)
{
    spiderBody(iter);
    spiderHands(iter);
}

void changeSize(int w, int h) //Сохранять пропорции при изменении размера окна
{
    if (h == 0)
        h = 1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glViewport(0, 0, w, h);

    glOrtho(0.0, w, -h, 0.0, -1.0, 1.0);
}

void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);

    list<Spider>::iterator iter = listSpider.begin();

    while (iter != listSpider.end())
    {
        spider(iter);
        iter++;
    }

    glFlush();
}

void callback_mouse(int button, int state, int x, int y) //нажатие мыши
{
    auto pSpider = remove_if(listSpider.begin(), listSpider.end(),
                             [x, y](const Spider &spider)
                             { return (fabs(spider.x - x) <= bodySize && fabs(spider.y + y) <= bodySize); });

    bool eraseSpider = false;

    if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON)
    {
        int rnd = rand() % 3 + 1;
        int r, g, b;
        switch (rnd)
        {
        case 1:
            r = rand() % 180;
            g = rand() % 180;
            b = rand() % 180;
            break;
        case 2:
            r = rand() % 180;
            g = rand() % 180;
            b = 180;
            break;
        case 3:
            r = rand() % 180;
            g = 180;
            b = rand() % 180;
            break;
        }

        list<Spider>::iterator iter = listSpider.begin();

        while (iter != listSpider.end())
        {
            if (fabs(iter->x - x) <= bodySize && fabs(iter->y + y) <= bodySize)
            {

                iter->r = r;
                iter->g = g;
                iter->b = b;
                listSpider.push_back(*iter);
                eraseSpider = true;
                break;
            }
            iter++;
        }

        if (!eraseSpider)
            listSpider.push_back({(float)x, (float)-y, r, g, b});
    }
    else if (state == GLUT_DOWN && button == GLUT_RIGHT_BUTTON)
    {

        listSpider.erase(pSpider, listSpider.end());
    }
    glutPostRedisplay();
}

void callback_key(unsigned char key, int x, int y) //нажатие клавиатуры
{
    if (key == 27)
        exit(0);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(500, 500);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Spider");

    init();
    glutDisplayFunc(display);
    glutReshapeFunc(changeSize);

    glutIgnoreKeyRepeat(1); //не задерживать клавиши
    glutMouseFunc(callback_mouse);
    glutKeyboardFunc(callback_key);
    glutMainLoop();

    listSpider.clear();

    return 0;
}
/*
Доп. задание
1. ЛКМ по пустому месту, появляется паук
2. ЛКМ по пауку - меняется цвет
2. ПКМ по пауку - удаляется
*/