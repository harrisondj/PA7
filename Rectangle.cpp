#include "rectangle.hpp"
#include <cstdlib>

//// Constructors ////

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int x, int y, int theWidth, int theHeight, Canvas* aCanvas)
{
	setHeight(theHeight);
	setWidth(theWidth);
	Canvas rectangleCanvas = aCanvas->getCanvas();
}

Rectangle::Rectangle(point theBottomLeft, point theTopRight, Canvas* aCanvas)
{
	setHeight(std::abs(theBottomLeft.x - theTopRight.x));
	setWidth(std::abs(theBottomLeft.y - theTopRight.y));
	Canvas rectangleCanvas = aCanvas->getCanvas();
}

//// Getter and Setters ////

int Rectangle::getHeight() {
	return height;
}

int Rectangle::getWidth() {
	return width;
}

void Rectangle::setHeight(int thisHeight) {
	height = thisHeight;
}

void Rectangle::setWidth(int thisWidth) {
	width = thisWidth;
}

//// Virtual Fuctions ////

void Rectangle::draw() {

}

void Rectangle::draw(char Arrow)
{
}

int Rectangle::computeArea() {
	return width * height;
}

int Rectangle::computeCircumference() {
	return 2 * (width + height);
}


//// Class Fuctions ////

void Rectangle::drawWithEndingPoint(char endingChar)
{
}
