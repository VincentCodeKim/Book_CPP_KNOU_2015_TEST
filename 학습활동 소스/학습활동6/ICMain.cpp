#include	<iostream>
#include	"IntClass.h"
using	namespace	std;

int	main()
{
	IntClass	iObj1(10);
	IntClass	iObj2 = ++iObj1;
	cout << "���� ǥ�� ++ ������" << endl;
	cout << "��ü�� �� : " << iObj1.getValue() << endl;
	cout << "������ �� : " << iObj2.getValue() << endl << endl;

	iObj2 = iObj1++;
	cout << "���� ǥ�� ++ ������" << endl;
	cout << "��ü�� �� : " << iObj1.getValue() << endl;
	cout << "������ �� : " << iObj2.getValue() << endl << endl;

	iObj1 += iObj2;
	cout << "+= ������" << endl;
	cout << "��ü�� �� : " << iObj1.getValue() << endl;

	return 0;
}
