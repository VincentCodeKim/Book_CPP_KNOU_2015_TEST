#include	<iostream>
#include	"Person.h"
#include	"Athlete.h"
using	namespace	std;

int	main()
{
	Person	p("È«±æµ¿");
	Athlete	a("±è¹®¼ö", "½Â¸®");

	p.print();
	cout << endl;
	a.print();
	cout << endl;

	return 0;
}
