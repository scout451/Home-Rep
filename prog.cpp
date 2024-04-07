#include <iostream>
#include <algorithm>
#include "function.h"
#define CHAR


using namespace std;

void main()
{
	srand(time(0));
	const int size = 10;
	char arr[size];
	Fill(arr, size, 'A', 'Z');
	Show(arr, size);
	Sort(arr, size);
	Show(arr, size);
	cout << MinEl(arr, size) << endl;
	cout << MaxEl(arr, size) << endl;


	system("pause");
}
#undef CHAR

#define DOUBLE

void main()
{
	srand(time(0));
	const int size = 10;
	double arr[size];
	Fill(arr, size, 0, 10);
	Show(arr, size);
	Sort(arr, size);
	Show(arr, size);
	cout << MinEl(arr, size) << endl;
	cout << MaxEl(arr, size) << endl;


	system("pause");
}
#undef DOUBLE

#define INTEGER

void main()
{
	srand(time(0));
	const int size = 10;
	char arr[size];
	Fill(arr, size, 'A', 'Z');
	Show(arr, size);
	Sort(arr, size);
	Show(arr, size);
	cout << MinEl(arr, size) << endl;
	cout << MaxEl(arr, size) << endl;


	system("pause");
}
#undef INTEGER
