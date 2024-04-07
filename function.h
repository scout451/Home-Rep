#pragma once
#include <iostream>
#include <algorithm>

using namespace std;

#define INTEGER
#ifdef INTEGER
void ShowArrayInt(const int* const arr, const int size);

inline int GetRandomIntValue(const int min, const int max);

void FillArrayInt(int* const arr, const int size, const int min, const int max);

int MaxElementInt(int* const arr, const int size);

int MinElementInt(int* const arr, const int size);

void SortArrayInt(int* const arr, const int size);

#define Show ShowArrayInt
#define Fill FillArrayInt
#define MinEl MinElementInt
#define MaxEl MaxElementInt
#define Sort SortArrayInt
#endif
#undef INTEGER

#define DOUBLE
#ifdef DOUBLE
void ShowArrayDouble(const double* const arr, const int size);

inline double GetRandomDoubleValue(const int min, const int max);

void FillArrayDouble(double* const arr, const int size, const int min, const int max);

double MaxElementDouble(double* const arr, const int size);

double MinElementDouble(double* const arr, const int size);

void SortArrayDouble(double* const arr, const int size);


#define Show ShowArrayDouble
#define Fill FillArrayDouble
#define MinEl MinElementDouble
#define MaxEl MaxElementDouble
#define Sort SortArrayDouble
#endif
#undef DOUBLE

#define CHAR
#ifdef CHAR
void ShowArrayChar(const char* const arr, const int size);

inline char GetRandomCharValue(char min, char max);

void FillArrayChar(char* const arr, const int size, char min, char max);

char MaxElementChar(char* const arr, const int size);

char MinElementChar(char* const arr, const int size);

void SortArrayChar(char* const arr, const int size);

#define Show ShowArrayChar
#define Fill FillArrayChar
#define MinEl MinElementChar
#define MaxEl MaxElementChar
#define Sort SortArrayChar
#endif
#undef CHAR