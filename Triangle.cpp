#include "triangle.hpp"

//// Constructors ////

Triangle::Triangle()
{
}

Triangle::Triangle(int x, int y, int newBase, int newHeight, Canvas* theCanvas)
{

	setXVal(x);
	setYVal(y);
	setBase(newBase);
	setHeight(newHeight);
	triangleCanvas = theCanvas;
}

Triangle::Triangle(point origin, point secondPt, point thirdPt, Canvas* theCanvas)
{

	setXVal(origin.x);
	setYVal(origin.y);
	triangleCanvas = theCanvas;
}

//// Getters and Setters ////

int Triangle::getBase() {
	return base;
}

int Triangle::getHeight() {
	return height;
}

int Triangle::getXVal() {
	return x;
}

int Triangle::getYVal() {
	return y;
}

void Triangle::setBase(int newBase) {
	base = newBase;
}

void Triangle::setHeight(int newHeight) {
	height = newHeight;
}

void Triangle::setXVal(int theX) {
	x = theX;
}

void Triangle::setYVal(int theY) {
	y = theY;
}

//// Virtual Fuctions ////

void Triangle::draw() {

}

int Triangle::computeArea() {
	return (height * base) / 2;
}

int Triangle::computeCircumference() {
	return height * 2 + base;
}