#pragma once
#include <iostream>
#include <algorithm>

using namespace std;

#ifdef INTEGER
#define Show ShowArrayInt
void ShowArrayInt(const int* const arr, const int size);

inline int GetRandomIntValue(const int min, const int max);

#define Fill FillArrayInt
void FillArrayInt(int* const arr, const int size, const int min, const int max);

#define MinMax MinMaxElementInt
void MinMaxElementInt(int* const arr, const int size, int* maxElement, int* minElement);

#define Sort SortArrayInt
void SortArrayInt(int* const arr, const int size);
#endif

#ifdef DOUBLE
#define Show ShowArrayDouble
void ShowArrayDouble(const double* const arr, const int size);

inline double GetRandomDoubleValue(const int min, const int max);

#define Fill FillArrayDouble
void FillArrayDouble(double* const arr, const int size, const int min, const int max);

#define MinMax MinMaxElementDouble
void MinMaxElementDouble(double* const arr, const int size, double* maxElement, double* minElement);

#define Sort SortArrayDouble
void SortArrayDouble(double* const arr, const int size);
#endif

#ifdef CHAR

#define Show ShowArrayChar
void ShowArrayChar(const char* const arr, const int size);

inline char GetRandomCharValue(char min, char max);

#define Fill FillArrayChar
void FillArrayChar(char* const arr, const int size, char min, char max);

#define MinMax MinMaxElementChar
void MinMaxElementChar(char* const arr, const int size, char* maxElement, char* minElement);

#define Sort SortArrayChar
void SortArrayChar(char* const arr, const int size);
#endif