#include <iostream>
#include "canvas.hpp"
#include "circle.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "shape.hpp"
#include "square.hpp"
#include "triangle.hpp"

int main() {
	/////////// MAIN.CPP CODE FROM PROGRAM ASSIGNMENT PAGE ///////////

	// all sort of shape variables declaration
	Canvas* myScreen = new Canvas(60,60,' ');  // create a Canvas 60 by 60 and its background is filled with ' '  (a blank)
	//myScreen->setFillChar(' ');  // or you can explicitly set the background char but in this case you don't need to do it.
	Triangle myTriangle (8, 12, 16, 8, myScreen);  // create a left triangle
	Triangle myTriangle1 (Point(25,12), Point(33, 4), Point(41,12), myScreen); // create a right triangle
	Rectangle myRectangle2(5,13,40, 20, myScreen); // create an outer rectangle
	Square mySquare (21, 18, 8, myScreen); // create an inner square
	Circle myCircle (21, 28, 4, myScreen); // add circle below the square

	//drawing the shapes from top to bottom
	myTriangle.draw();
	myTriangle1.draw();
	myRectangle2.drawWithEndingPoint('+');
	mySquare.drawWithEndingPoint('*');
	myCircle.setLineType('O');
	myCircle.draw();
	myScreen->show();  //finally displays all the object on the canvas
}