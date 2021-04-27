#include "point.hpp"
#include "rectangle.hpp"
#include "line.hpp"
#ifndef SQUARE_HPP
#define SQUARE_HPP

class Square : public Rectangle {

  private:
      int side = 0;
      int x = 0;
      int y = 0;
      Canvas* squareCanvas;
    
  public:
      Square(int x, int y, int aSide, Canvas* theCanvas);
      Square(point aBottomLeft, point aTopRight, Canvas* theCanvas);

      int getSide();
      void setSide(int side);
      int getXVal();
      int getYVal();
      void setXVal(int theX);
      void setYVal(int theY);
      void setSide(int side);

};

#endif