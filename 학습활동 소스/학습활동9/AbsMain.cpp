#include	<iostream>
#include	"Shape.h"
#include	"Circle.h"
#include	"Rectangle.h"
using	namespace	std;

int	main()
{
	Circle	c(10, 20, 30);
	Rectangle	r(10, 10, 30, 20);

	c.print();
	cout << "       ���� = " << c.area() << endl << endl;

	r.print();
	cout << "       ���� = " << r.area() << endl;

	return 0;
}
