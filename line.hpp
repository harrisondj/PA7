#include "point.hpp"
#include "shape.hpp"
#include "canvas.hpp"
#ifndef LINE_HPP
#define LINE_HPP

class Line : public Shape {

  private:
    int length;
    Point endPoint;
    Canvas* lineCanvas;

  public:
    Line();
    Line(int x, int y, int x1, int y1, Canvas* aCanvas);
    Line(Point start, Point end, Canvas* aCanvas);

    int getLength();
    void setEndPt(int x, int y);
    void draw(char arrow);

    int computeArea();
    int computeCircumference();
    void draw();

};

#endif