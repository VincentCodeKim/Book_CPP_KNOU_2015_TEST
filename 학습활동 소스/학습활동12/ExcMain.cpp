#include	<iostream>
#include	<exception>
#include	"EClass.h"
using	namespace	std;

int	main()
{
	void	getDate(int &y, int &m, int& d);
	int	yy, mm, dd;
	try {
		getDate(yy, mm, dd);
		cout << "�Էµ� ��¥�� " << yy << "�� " << mm  << "�� "<< dd << "���Դϴ�." << endl;
	}
	catch (EClassLow& e) {
		cout << e.what() << endl;
	}
	catch (EClassHigh& e) {
		cout << e.what() << endl;
	}

	return 0;
}

void	getDate(int &y, int &m, int& d)
{
	int	yy, mm, dd;

	cout << "�� : ";
	cin >> yy;
	cout << "�� : ";
	cin >> mm;
	cout << "�� : ";
	cin >> dd;

	if (yy < 2000)
		throw EClassLow();
	else if (yy > 2100)
		throw EClassHigh();
	y = yy;
	m = mm;
	d = dd;
}
