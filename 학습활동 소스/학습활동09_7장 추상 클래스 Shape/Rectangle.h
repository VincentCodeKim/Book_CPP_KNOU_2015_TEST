#ifndef	RECTANGLE_H_INCLUDED
#define	RECTANGLE_H_INCLUDED

#include	<iostream>
#include	"Shape.h"
using	namespace	std;

class	Rectangle : public Shape {
	double	x1, y1, x2, y2;
public:
	Rectangle(double x1, double y1, double x2, double y2) : x1(x1), y1(y1), x2(x2), y2(y2) {}

	double	area() const {
		return (x2 - x1) * (y2 - y1);
	}

	void	print() const {
		cout << "직사각형 --> (" << x1 << ", " << y1 << ")  -  (" << x2 << ", " << y2 << ")" << endl;
	}
};

#endif	// RECTANGLE_H_INCLUDED
