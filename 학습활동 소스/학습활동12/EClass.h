#ifndef	ECLASS_H_INCLUDED
#define	ECLASS_H_INCLUDED

#include	<exception>
using	namespace	std;

class	EClassLow : public exception {
public:
	const char* what() {
		return "2000년 1월 1일 이후 날짜를 입력하시오";
	}
};

class	EClassHigh : public exception {
public:
	const char* what() {
		return "2100년 12월 31일 이전 날짜를 입력하시오";
	}
};

#endif	ECLASS_H_INCLUDED
