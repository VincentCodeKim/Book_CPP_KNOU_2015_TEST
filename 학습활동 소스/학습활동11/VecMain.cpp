#include	<iostream>
#include	<vector>
#include	<algorithm>
using	namespace	std;

int	main()
{
	vector<int>	intVec;

	int	n;
	do {
		cout << "정수를 입력하시오 : ";
		cin >> n;
		if (n >= 0)
			intVec.push_back(n);
	} while (n >= 0);

	vector<int>::iterator	ivIter;
	int	max = 0;

	for (ivIter=intVec.begin() ; ivIter < intVec.end() ; ivIter++)
		if (max < *ivIter)
			max = *ivIter;
	cout << "최대값 = " << max << endl << endl;

	sort(intVec.begin(), intVec.end());
	cout << "정렬 결과 : ";
	for (ivIter=intVec.begin() ; ivIter < intVec.end() ; ivIter++)
		cout << *ivIter << "  ";
	cout << endl;

	return 0;
}
