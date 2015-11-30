#include	<iostream>
using namespace std;

int	main()
{
	int	findMax(int arr[], int n);
	float	findMax(float arr[], int n);
	int	intArr[10] = {20, 30, 12, 15, 50, 24, 72, 44, 81, 5};

	cout << "배열의 내용 : ";
	for (int i=0 ; i < 10 ; i++)
		cout << intArr[i] << "  ";
	cout << endl << endl;
	cout << "최대값 = ";
	cout << findMax(intArr, 10) << endl << endl;

	float	floatArr[10] = {20.5f, 30.3f, 1.2f, 15.6f, 50.3f, 2.4f, 72.5f, 44.0f, 8.1f, 5.0f};

	cout << "배열의 내용 : ";
	for (int i=0 ; i < 10 ; i++)
		cout << floatArr[i] << "  ";
	cout << endl << endl;
	cout << "최대값 = ";
	cout << findMax(floatArr, 10) << endl;

	return 0;
}

int	findMax(int arr[], int n)
{
	int	max = arr[0];
	for (int i=1 ; i < n ; i++)
		if (max < arr[i])
			max = arr[i];
	return max;
}

float	findMax(float arr[], int n)
{
	float	max = arr[0];
	for (int i=1 ; i < n ; i++)
		if (max < arr[i])
			max = arr[i];
	return max;
}
