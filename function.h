#pragma once
#include <iostream>
#include <algorithm>

using namespace std;

//int

#ifdef INTEGER
void ShowArrayInt(const int* const arr, const int size);
#endif

#ifdef INTEGER
inline int GetRandomIntValue(const int min, const int max);
#endif

#ifdef INTEGER
void FillArrayInt(int* const arr, const int size, const int min, const int max);
#endif

#ifdef INTEGER
void MinMaxElementInt(int* const arr, const int size, int* maxElement, int* minElement);
#endif

#ifdef INTEGER
void SortArrayInt(int* const arr, const int size);
#endif


//double

#ifdef DOUBLE
void ShowArrayDouble(const double* const arr, const int size);
#endif

#ifdef DOUBLE
inline double GetRandomDoubleValue(const int min, const int max);
#endif

#ifdef DOUBLE
void FillArrayDouble(double* const arr, const int size, const int min, const int max);
#endif

#ifdef DOUBLE
void MinMaxElementDouble(double* const arr, const int size, double* maxElement, double* minElement);
#endif

#ifdef DOUBLE
void SortArrayDouble(double* const arr, const int size);
#endif

//char
#ifdef CHAR
void ShowArrayChar(const char* const arr, const int size);
#endif

#ifdef CHAR
inline char GetRandomCharValue(char min, char max);
#endif

#ifdef CHAR
FillArrayChar(char* const arr, const int size, char min, char max);
#endif

#ifdef CHAR
void MinMaxElementChar(char* const arr, const int size, char* maxElement, char* minElement);
#endif

#ifdef CHAR
void SortArrayChar(char* const arr, const int size);
#endif