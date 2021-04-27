#include "shape.hpp"

//// Contructors ////

Shape::Shape()
{
}

Shape::Shape(int x, int y, Canvas* aCanvas)
{
}

//// Getters and Setters ////

char Shape::getLineChar() {
	return lineChar;
}

void Shape::setLineChar(char aLineChar) {
	lineChar = aLineChar;
}

void Shape::setOriginPt(int x, int y)
{
}
