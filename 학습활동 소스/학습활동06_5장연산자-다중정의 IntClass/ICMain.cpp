#include	<iostream>
#include	"IntClass.h"
using	namespace	std;

int	main()
{
	IntClass	iObj1(10);
	IntClass	iObj2 = ++iObj1;
	cout << "전위 표기 ++ 연산자" << endl;
	cout << "객체의 값 : " << iObj1.getValue() << endl;
	cout << "수식의 값 : " << iObj2.getValue() << endl << endl;

	iObj2 = iObj1++;
	cout << "후위 표기 ++ 연산자" << endl;
	cout << "객체의 값 : " << iObj1.getValue() << endl;
	cout << "수식의 값 : " << iObj2.getValue() << endl << endl;

	iObj1 += iObj2;
	cout << "+= 연산자" << endl;
	cout << "객체의 값 : " << iObj1.getValue() << endl;

	return 0;
}
