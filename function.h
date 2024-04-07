#pragma once
#include <iostream>
#include <algorithm>

using namespace std;

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
int MaxElementInt(int* const arr, const int size);
#endif

#ifdef INTEGER
int MinElementInt(int* const arr, const int size);
#endif

#ifdef INTEGER
void SortArrayInt(int* const arr, const int size);


#define Show ShowArrayInt
#define Fill FillArrayInt
#define MinEl MinElementInt
#define MaxEl MaxElementInt
#define Sort SortArrayInt
#endif

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
double MaxElementDouble(double* const arr, const int size);
#endif

#ifdef DOUBLE
double MinElementDouble(double* const arr, const int size);
#endif

#ifdef DOUBLE
void SortArrayDouble(double* const arr, const int size);


#define Show ShowArrayDouble
#define Fill FillArrayDouble
#define MinEl MinElementDouble
#define MaxEl MaxElementDouble
#define Sort SortArrayDouble
#endif

#ifdef CHAR
void ShowArrayChar(const char* const arr, const int size);
#endif

#ifdef CHAR
inline char GetRandomCharValue(char min, char max);
#endif

#ifdef CHAR
void FillArrayChar(char* const arr, const int size, char min, char max);
#endif

#ifdef CHAR
char MaxElementChar(char* const arr, const int size);
#endif

#ifdef CHAR
char MinElementChar(char* const arr, const int size);
#endif

#ifdef CHAR
void SortArrayChar(char* const arr, const int size);


#define Show ShowArrayChar
#define Fill FillArrayChar
#define MinEl MinElementChar
#define MaxEl MaxElementChar
#define Sort SortArrayChar
#endif