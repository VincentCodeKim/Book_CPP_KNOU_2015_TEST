#ifndef	ATHLETE_H_INCLUDED
#define	ATHLETE_H_INCLUDED

#include	<iostream>
#include	<string>
#include	"Person.h"
using	namespace	std;

class	Athlete : public Person {
	string	team;
public:
	Athlete(const string& n, const string& t) : Person(n), team(t) {}
	const string&	getTeam() const { return team; }
	void	print() const {
		cout<< team << "�� �Ҽ� ���� " << getName() << "�Դϴ�";
	}
};

#endif	// ATHLETE_H_INCLUDED
