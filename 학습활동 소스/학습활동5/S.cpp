#include	<iostream>
#include	"S.h"

int	S::nObjs = 0;

S::S(const char* n) : name(n), sNo(++nObjs) {}

void	S::display() const
{
	cout << "�̸� : " << name << endl;
	cout << "��ȣ : " << sNo << endl << endl;
}

