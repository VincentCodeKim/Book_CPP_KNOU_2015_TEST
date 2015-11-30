#include	<iostream>
using namespace std;

int	findMax(int arr[], int n)
{
	int	max = arr[0];
	for (int i=1 ; i < n ; i++)
		if (max < arr[i])
			max = arr[i];
	return max;
}

int	main()
{
	int	intArr[10] = {20, 30, 12, 15, 50, 24, 72, 44, 81, 5};

	cout << "배열의 내용 : ";
	for (int i=0 ; i < 10 ; i++)
		cout << intArr[i] << "  ";
	cout << endl << endl;
	cout << "최대값 = ";
	cout << findMax(intArr, 10) << endl;

	return 0;
}
