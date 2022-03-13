#include "Canvas.h"
#include <iostream>

Canvas::Canvas(int width, int height)
{
    matrix = new char *[height];
    for (int i = 0; i < height; i++)
        matrix[i] = new char[width];
    Canvas::width = width;
    Canvas::height = height;
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
    Canvas::Clear();
    for (int i = 0; i < Canvas::height; i++)
        for (int j = 0; j < Canvas::width; j++)
            if ((i - x) * (i - x) + (j - y) * (j - y) == ray * ray)
                Canvas::matrix[i][j] = ch;
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
    Canvas::Clear();
    for (int i = 0; i < Canvas::height; i++)
        for (int j = 0; j < Canvas::width; j++)
            if ((i - x) * (i - x) + (j - y) * (j - y) <= ray * ray)
                Canvas::matrix[i][j] = ch;
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
    Canvas::Clear();
    Canvas::Clear();
    for (int i = top; i <= bottom; i++)
        Canvas::matrix[i][left] = Canvas::matrix[i][right] = ch;
    for (int i = left; i <= right; i++)
        Canvas::matrix[top][i] = Canvas::matrix[bottom][i] = ch;
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
    Canvas::Clear();
    for (int i = top; i <= bottom; i++)
        for (int j = left; j <= right; j++)
            Canvas::matrix[i][j] = ch;
}

void Canvas::SetPoint(int x, int y, char ch)
{
    Canvas::matrix[x][y] = ch;
}

void Canvas::Print()
{
    for (int i = 0; i < Canvas::height; i++, std::cout << '\n')
        for (int j = 0; j < Canvas::width; j++)
            std::cout << Canvas::matrix[i][j];
}

void Canvas::Clear()
{
    for (int i = 0; i < Canvas::height; i++)
        for (int j = 0; j < Canvas::width; j++)
            Canvas::matrix[i][j] = ' ';
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
    int dx, dy, p, x, y;
    dx = x2 - x1;
    dy = y2 - y1;

    if(dx >= dy)
        for(x = x1, y = y1, p = 2 * dy - dx; x <= x2 ; x ++)
            if (p >= 0)
                SetPoint(x, y, ch), y++, p = p + 2 * dy - 2 * dx;
            else
                SetPoint(x, y, ch), p = p + 2 * dy;
    else
        for(x = x1, y = y1, p = 2 * dx - dy; y <= y2 ; y ++)
            if (p >= 0)
                SetPoint(x, y, ch), x++, p = p + 2 * dx - 2 * dy;
            else
                SetPoint(x, y, ch), p = p + 2 * dx;
}