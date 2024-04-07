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

int MaxElementInt(int* const arr, const int size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++)
		if (arr[i] > max)
			max = arr[i];
		return max;
}

int MinElementInt(int* const arr, const int size)
{
	int min = arr[0];
	for (int i = 0; i < size; i++)
		if (arr[i] < min)
			min = arr[i];
	return min;
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

double MaxElementDouble(double* const arr, const int size)
{
	double max = arr[0];
	for (int i = 0; i < size; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

double MinElementDouble(double* const arr, const int size)
{
	double min = arr[0];
	for (int i = 0; i < size; i++)
		if (arr[i] < min)
			min = arr[i];
	return min;
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

char MaxElementChar(char* const arr, const int size)
{
	char max = arr[0];
	for (int i = 0; i < size; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

char MinElementChar(char* const arr, const int size)
{
	char min = arr[0];
	for (int i = 0; i < size; i++)
		if (arr[i] < min)
			min = arr[i];
	return min;
}

void SortArrayChar(char* const arr, const int size)
{
	sort(arr, arr + size);
}
#undef CHAR