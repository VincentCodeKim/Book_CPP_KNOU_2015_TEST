#include	<iostream>
#include	"Person.h"
#include	"Athlete.h"
using	namespace	std;

int	main()
{
	Person	p("홍길동");
	Athlete	a("김문수", "승리");

	p.print();
	cout << endl;
	a.print();
	cout << endl;

	return 0;
}
