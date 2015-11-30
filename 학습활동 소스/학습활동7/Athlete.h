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
		cout<< team << "팀 소속 선수 " << getName() << "입니다";
	}
};

#endif	// ATHLETE_H_INCLUDED
