#include	<iostream>
#include	<vector>
#include	<algorithm>
using	namespace	std;

int	main()
{
	vector<int>	intVec;

	int	n;
	do {
		cout << "������ �Է��Ͻÿ� : ";
		cin >> n;
		if (n >= 0)
			intVec.push_back(n);
	} while (n >= 0);

	vector<int>::iterator	ivIter;
	int	max = 0;

	for (ivIter=intVec.begin() ; ivIter < intVec.end() ; ivIter++)
		if (max < *ivIter)
			max = *ivIter;
	cout << "�ִ밪 = " << max << endl << endl;

	sort(intVec.begin(), intVec.end());
	cout << "���� ��� : ";
	for (ivIter=intVec.begin() ; ivIter < intVec.end() ; ivIter++)
		cout << *ivIter << "  ";
	cout << endl;

	return 0;
}
