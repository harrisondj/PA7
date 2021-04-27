#include "shape.hpp"
#include "canvas.hpp"
#include "point.hpp"
#include "line.hpp"
//#include "canvas.hpp"
#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle : public Shape {

  private:
      int width;
      int height;

    
  public:
      Rectangle();
      Rectangle(int x, int y, int theWidth, int theHeight, Canvas* aCanvas);
      Rectangle(point theBottomLeft, point theTopRight, Canvas* aCanvas);

      void draw(char Arrow);
      void draw();
      int computeArea();
      int computeCircumference();

      void drawWithEndingPoint(char endingChar);

      int getHeight();
      int getWidth();
      void setHeight(int thisHeight);
      void setWidth(int thisWidth);


};

#endif