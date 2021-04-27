#include "canvas.hpp"
#include "point.hpp"
#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape {
  protected:
    int x;
    int y;
    char lineChar;


  public:
    Shape();
    Shape(int x, int y, Canvas* aCanvas);

    char getLineChar();
    void setLineChar(char aLineChar);
    void setOriginPt(int x, int y);
    virtual int computeArea() = 0;
    virtual int computeCircumference() = 0;
    virtual void draw() = 0;

};

#endif