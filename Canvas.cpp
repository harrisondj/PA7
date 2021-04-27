#include "canvas.hpp"
#include <iostream>

//// Constructors ////


Canvas::Canvas()
{
}

Canvas::Canvas(const int DEFAULT_X_VAL, const int DEFAULT_Y_VAL) : GRID()
{
}

Canvas::Canvas(int xSize, int ySize, char fillChar) : GRID()
{

    setXValue(xSize);
    setYValue(ySize);
    setFillChar(fillChar);
    setGRID(xSize, ySize);
}

//// Getters and Setters ////

char Canvas::getFillChar() {
	return fillChar;
}

    // Getter to return this canvas object
Canvas& Canvas::getCanvas() {
    return *this;
}

int Canvas::getMaxX() {
    return MAX_X_VAL;
}

int Canvas::getXValue() {
    return theXSize;
}

int Canvas::getYValue() {
    return theYSize;
}
    
void Canvas::setXValue(int xSize) {
    theXSize = xSize;
}
    
void Canvas::setYValue(int ySize) {
    theYSize = ySize;
}

void Canvas::setFillChar(char theChar) {
	fillChar = theChar;
}

void Canvas::setGRID(int xSize, int ySize) {
    char GRID[xSize][ySize];
}

//void Canvas::setGRIDChar(int x, int y) {
//
//}

//// Class Fuctions ////

    // Go through every element in every row and change it to the fill character
void Canvas::clearCanvas() {
    for (auto& row : GRID) {
        for (auto& thisChar : row) {
            thisChar = fillChar;
        }
    }
}

    // Go through every element for every row and print that character
void Canvas::show() {
    for (auto& row : GRID) {
        for (auto& thisChar : row) {
            std::cout << thisChar << std::endl;
        }
    }
}