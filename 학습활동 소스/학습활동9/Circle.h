#ifndef	CIRCLE_H_INCLUDED
#define	CIRCLE_H_INCLUDED

#include	<iostream>
#include	"Shape.h"
using	namespace	std;

class	Circle : public Shape {
	double	centerX, centerY, radius;
public:
	Circle(double cx, double cy, double r) : centerX(cx), centerY(cy), radius(r) {}

	double	area() const {
		return radius * radius * 3.14159;
	}

	void	print() const {
		cout << "�� --> �߽���ǥ (" << centerX << ", " << centerY << ")  �ݰ� " << radius << endl;
	}
};

#endif	// CIRCLE_H_INCLUDED
