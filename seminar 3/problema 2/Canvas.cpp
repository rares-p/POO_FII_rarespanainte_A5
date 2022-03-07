#include "Canvas.h"
#include <iostream>

Canvas::Canvas(int width, int height)
{
    matrix=new char*[height];
    for(int i=0;i<height;i++)
        matrix[i]=new char[width];
    Canvas::width = width;
    Canvas::height = height;
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
    Canvas::Clear();
    for(int i=0;i<Canvas::height;i++)
        for(int j=0;j<Canvas::width;j++)
            if((i-x)*(i-x)+(j-y)*(j-y)==ray*ray)
                Canvas::matrix[i][j] = ch;
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
    Canvas::Clear();
    for(int i=0;i<Canvas::height;i++)
        for(int j=0;j<Canvas::width;j++)
            if((i-x)*(i-x)+(j-y)*(j-y)<=ray*ray)
                Canvas::matrix[i][j] = ch;
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
    Canvas::Clear();
    Canvas::Clear();
    for(int i=top;i<=bottom;i++)
        Canvas::matrix[i][left] = Canvas::matrix[i][right] = ch;
    for(int i=left;i<=right;i++)
        Canvas::matrix[top][i] = Canvas::matrix[bottom][i] = ch;
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
    Canvas::Clear();
    for(int i=top;i<=bottom;i++)
        for(int j=left;j<=right;j++)
            Canvas::matrix[i][j] = ch;
}

void Canvas::SetPoint(int x, int y, char ch)
{
    Canvas::Clear();
    Canvas::matrix[x][y]=ch;
}

void Canvas::Print()
{
    for(int i=0;i<Canvas::height;i++,std::cout<<'\n')
        for(int j=0;j<Canvas::width;j++)
            std::cout<<Canvas::matrix[i][j];
}

void Canvas::Clear()
{
    for(int i=0;i<Canvas::height;i++)
        for(int j=0;j<Canvas::width;j++)
            Canvas::matrix[i][j]=' ';
}
