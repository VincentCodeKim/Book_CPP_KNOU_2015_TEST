#ifndef	ECLASS_H_INCLUDED
#define	ECLASS_H_INCLUDED

#include	<exception>
using	namespace	std;

class	EClassLow : public exception {
public:
	const char* what() {
		return "2000�� 1�� 1�� ���� ��¥�� �Է��Ͻÿ�";
	}
};

class	EClassHigh : public exception {
public:
	const char* what() {
		return "2100�� 12�� 31�� ���� ��¥�� �Է��Ͻÿ�";
	}
};

#endif	ECLASS_H_INCLUDED
