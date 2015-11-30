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
		cout << "입력된 날짜는 " << yy << "년 " << mm  << "월 "<< dd << "일입니다." << endl;
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

	cout << "연 : ";
	cin >> yy;
	cout << "월 : ";
	cin >> mm;
	cout << "일 : ";
	cin >> dd;

	if (yy < 2000)
		throw EClassLow();
	else if (yy > 2100)
		throw EClassHigh();
	y = yy;
	m = mm;
	d = dd;
}
