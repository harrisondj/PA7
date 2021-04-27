#include "square.hpp"
#include "canvas.hpp"
#include <cstdlib>

//// Contructors ////

Square::Square(int x, int y, int aSide, Canvas* theCanvas)
{

	setXVal(x);
	setYVal(y);
	setSide(aSide);
	squareCanvas = theCanvas;
}

Square::Square(point aBottomLeft, point aTopRight, Canvas* theCanvas)
{

	setXVal(aBottomLeft.x);
	setYVal(aTopRight.y);
	setSide(std::abs(aBottomLeft.x - aTopRight.x));
	squareCanvas = theCanvas;
}

//// Getters and Setters ////

int Square::getSide() {
	return side;
}

int Square::getXVal() {
	return x;
}

int Square::getYVal() {
	return y;
}

void Square::setXVal(int theX) {
	x = theX;
}

void Square::setYVal(int theY) {
	y = theY;
}

void Square::setSide(int aSide) {
	side = aSide;
}
