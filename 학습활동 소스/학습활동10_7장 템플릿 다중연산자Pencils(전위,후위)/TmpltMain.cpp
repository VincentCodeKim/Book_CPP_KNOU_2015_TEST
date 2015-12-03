#include	<iostream>
#include	"Array.h"
#include	"Pencils.h"
using	namespace	std;

int	main()
{
	Array<Pencils, 5>	pnclArr;

	pnclArr[0] = 20;
	pnclArr[1] = 15;
	pnclArr[2] = 30;
	pnclArr[3] = 14;
	pnclArr[4] = 40;

	for (int i=0 ; i < 5 ; i++)
		pnclArr[i].display();

	return 0;
}
