#ifndef	S_H_INCLUDED
#define	S_H_INCLUDED

#include	<string>
using	namespace	std;

class	S {
	string	name;
	int		sNo;
	static	int	nObjs;
public:
	S(const char* n);
	void	display() const;
	static	int	getNObjs() {
		return nObjs;
	}
};

#endif	// S_H_INCLUDED
