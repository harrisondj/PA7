#ifndef POINT_HPP
#define POINT_HPP

struct point {

	int x = 0;
	int y = 0;
	point();
	point(int theX, int theY) : x(theX), y(theY) {
	
	}

};

typedef point Point;

#endif
