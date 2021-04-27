#include <algorithm>
#include <cmath>
#include "line.hpp"

////////// LINE CLASS CODE FROM "Sarah Doyle" AND ADAPTED FOR MY PROGRAM //////////

//// Contructors ////

Line::Line() : Shape() 
{

	endPoint.x = 0;
	endPoint.y = 0;
	length = 0;
}

Line::Line(int x, int y, int x1, int y1, Canvas* aCanvas) 
: Shape(x, y, aCanvas) 
{
	
  setOriginPt(x, y);
  setEndPt(x1, y1);
  lineCanvas = aCanvas;
}

Line::Line(Point start, Point end, Canvas* canvas) 
: Shape(start.x, start.y, canvas) 
{
	
  setOriginPt(start.x, start.y);
  setEndPt(end.x, end.y);
  lineCanvas = canvas;
}

//// Getters and Setters ////

int Line::getLength() {
  float temp = (std::sqrt(std::pow(lineCanvas->getXValue() - endPoint.x, 2) + std::pow(lineCanvas->getYValue() - endPoint.y, 2)));
  length = (int)(temp + .05); //rounding up
  return length;
}

void Line::setEndPt(int x, int y) {
  endPoint.x = x;
  endPoint.y = y;
}

//// Virtual Fuctions ////

  // TODO: fully implement line::draw code from "Sarah Doyle" to work in this program

void Line::draw(char arrow) {
  int theXMax = lineCanvas->getMaxX();
  //Canvas canvas = canvas.getCanvas();
  char* pointer = lineCanvas->getGrid();
  int x1, y1, x2, y2;
  x1 = lineCanvas->getXValue();
  y1 = lineCanvas->getYValue();
  x2 = endPoint.x;
  y2 = endPoint.y;

  int x, y, p;

  //for a vertical line
  if (x2 - x1 == 0)
  {
    x = x1;
    //min and max are functions from the algorithm library 
    int minY = std::min(y1, y2);//returns the smallest 
    int maxY = std::max(y1, y2);//returns the largest

    for (int i = minY; i < maxY; i++)
    {
      //this is a conversion to access the 2-d grid as if it were a 1-d grid
      pointer[x + (i * theXMax)] = lineCanvas->getFillChar();
    }

    pointer[x1 + (y1 * theXMax)] = '+';
    pointer[x2 + (y2 * theXMax)] = '+';
    return; //leave function 
  }

  //check the slope of the line, slope greater than 1
  const bool steep = (abs(y2 - y1) > abs(x2 - x1));

  if (x1 > x2)
  {
    std::swap(x1, x2);
    std::swap(y1, y2);
  }

  //new y value
  y = y1;

  int MAX_Y = y2;
  int MAX_X = x2;

  //filling the grid with the line 
  if (steep)
  {
    x = x1;
    y = y1;
    float y_step = float(y2 - y1) / (x2 - x1);
    int initial_y = y;
    for (int i = x; i <= MAX_X; i++)
    {
      y = initial_y + round(y_step * (i - x)); // need to do this way to accumulate fractional quantity
      pointer[i + (y * theXMax)] = lineCanvas->getFillChar();
    }
  }
  else
  {
    if (y1 == y2) {  //handling horizontal line
      for (int i = x1; i <= MAX_X; i++)
      {
        pointer[i + (y * theXMax)] = lineCanvas->getFillChar();
      }
    }
    else {
      if (y1 <= y2) {  // slope is postive
        x = x1;
        y = y1;
        }
      else {   // slope is negative
        x = x2;
        y = y2;
        MAX_Y = y1;  //new MAX_Y
      }
        float x_step = float(x2 - x1) / (y2 - y1);
        int initial_x = x;
        for (int j = y; j <= MAX_Y; j++)
      {
        x = initial_x + round(x_step * (j - y));
        pointer[x + (j * theXMax)] = lineCanvas->getFillChar();
      }
    }
  }

  //character for line endpoints
  pointer[x1 + (y1 * theXMax)] = '+';
  pointer[x2 + (y2 * theXMax)] = '+';
}

int Line::computeArea() 
{
  // To fulfill abstract class
}

int Line::computeCircumference() 
{
  // To fulfill abstract class
}

void Line::draw() 
{
  // To fulfill abstract class
}