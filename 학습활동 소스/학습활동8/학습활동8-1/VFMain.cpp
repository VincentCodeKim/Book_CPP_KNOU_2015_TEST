#include	<iostream>
#include	"Person.h"
#include	"Athlete.h"
using	namespace	std;

int	main()
{
	Person	p("ȫ�浿");
	Athlete	a("�蹮��", "�¸�");

	p.print();
	cout << endl;
	a.print();
	cout << endl;

	Person*	pP = &p;
	cout << endl;
	pP->print();
	cout << endl;

	pP = &a;
	pP->print();
	cout << endl;

	return 0;
}
