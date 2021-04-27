#include "shape.hpp"
#include "canvas.hpp"
#include "line.hpp"
#ifndef CIRCLE_HPP
#define CIRCLE_HPP

class Circle : public Shape {

  private:
      int radius = 0;
      char charType = ' ';
      int xVal = 0;
      int yVal = 0;
      Canvas* circleCanvas;
    
  public:
      Circle();
      Circle(int x, int y, int radius, Canvas* aCanvas);

      int getRadius();
      void setRadius(int newRadius);
      int getXVal();
      void setXVal(int x);
      int getYVal();
      void setYVal(int y);
      int computeArea();
      int computeCircumference();
      void draw();

      void setLineType(char theChar);

};

#endif