#include <iostream>
#include <algorithm>
#include "function.h"

using namespace std;


#define INTEGER
void ShowArrayInt(const int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

inline int GetRandomIntValue(const int min, const int max)
{
	return rand() % (max - min + 1) + min;
}


void FillArrayInt(int* const arr, const int size, const int min, const int max)
{
	for (int i = 0; i < size; i++)
		arr[i] = GetRandomIntValue(min, max);
}

void MinMaxElementInt(int* const arr, const int size, int* maxElement, int* minElement)
{
	int* minElement = 0;
	int* maxElement = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > *maxElement)
			*maxElement = arr[i];
		if (arr[i] < *minElement)
			*minElement = arr[i];
	}
}

void SortArrayInt(int* const arr, const int size)
{
	sort(arr, arr + size);
}
#undef INTEGER

#define DOUBLE
void ShowArrayDouble(const double* const arr, const int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

inline double GetRandomDoubleValue(const int min, const int max)
{
	const int newMin = min * 10;
	const int newMax = max * 10;
	return (rand() % (newMax - newMin + 1) + newMin) / 10.0;
}

void FillArrayDouble(double* const arr, const int size, const int min, const int max)
{
	for (int i = 0; i < size; i++)
		arr[i] = GetRandomDoubleValue(min, max);
}

void MinMaxElementDouble(double* const arr, const int size, double* maxElement, double* minElement)
{
	double* minElement = 0;
	double* maxElement = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > *maxElement)
			*maxElement = arr[i];
		if (arr[i] < *minElement)
			*minElement = arr[i];
	}
}

void SortArrayDouble(double* const arr, const int size)
{
	sort(arr, arr + size);
}
#undef DOUBLE

#define CHAR
void ShowArrayChar(const char* const arr, const int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

inline char GetRandomCharValue(char min, char max)
{
	return rand() % (max - min + 1) + min;
}

void FillArrayChar(char* const arr, const int size, char min, char max)
{
	for (int i = 0; i < size; i++)
		arr[i] = GetRandomCharValue(min, max);
}

void MinMaxElementChar(char* const arr, const int size, char* maxElement, char* minElement)
{
	char* minElement = 0;
	char* maxElement = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > *maxElement)
			*maxElement = arr[i];
		if (arr[i] < *minElement)
			*minElement = arr[i];
	}
}

void SortArrayChar(char* const arr, const int size)
{
	sort(arr, arr + size);
}
#undef CHAR