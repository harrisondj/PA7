#include "canvas.hpp"
#include "point.hpp"
#include "shape.hpp"
#include "line.hpp"
#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

class Triangle : public Shape {

  private:
      int base = 0;
      int height = 0;
      int x;
      int y;
      Canvas* triangleCanvas;
    
  public:
      Triangle();
      Triangle(int x, int y, int newBase, int newHeight, Canvas* theCanvas);
      Triangle(point origin, point secondPt, point thirdPt, Canvas* theCanvas);

      void draw();

      int computeArea();
      int computeCircumference();

      int getBase();
      int getHeight();
      int getXVal();
      int getYVal();
      void setBase(int newBase);
      void setHeight(int newHeight);
      void setXVal(int theX);
      void setYVal(int theY);

};

#endif