#include "circle.hpp"
#include <cmath>
//#include <corecrt_math_defines.h>
#define _USE_MATH_DEFINES

//// Contructors ////

Circle::Circle()
{
}

Circle::Circle(int x, int y, int radius, Canvas* aCanvas)
{

	setRadius(radius);
	setXVal(x);
	setYVal(y);
	circleCanvas = aCanvas;
}

//// Getters and Setters ////

int Circle::getRadius() {
	return radius;
}

int Circle::getXVal() {
	return xVal;
}

int Circle::getYVal() {
	return yVal;
}

void Circle::setRadius(int newRadius) {
	radius = newRadius;
}

void Circle::setXVal(int x) {
	xVal = x;
}

void Circle::setYVal(int y) {
	yVal = y;
}

void Circle::setLineType(char theChar) {
	charType = theChar;
}

//// Virtual Functions ////

int Circle::computeArea() {
	int area = 0;
	area = M_PI * (radius * radius);
	return area;
}

int Circle::computeCircumference() {
	int circum = 0;
	circum = 2 * M_PI * radius;
	return circum;
}

void Circle::draw() {
	
	if (radius > 2);
}

//// Class Fuctions ////
