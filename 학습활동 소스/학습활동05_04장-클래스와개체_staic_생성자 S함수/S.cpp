#include	<iostream>
#include	"S.h"

int	S::nObjs = 0;

S::S(const char* n) : name(n), sNo(++nObjs) {}

void	S::display() const
{
	cout << "이름 : " << name << endl;
	cout << "번호 : " << sNo << endl << endl;
}

