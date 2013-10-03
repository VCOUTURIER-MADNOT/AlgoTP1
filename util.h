#ifndef DEF_UTILS
#define DEF_UTILS 
	
	#include <stdio.h>
	#include <stdlib.h>

	int readInputFile(const char* _filename, int ** _array, int * _arraySize);

	void echanger(int ** _array, int _arraySize ,int _indexA, int _indexB);

	void printArray(int * _array, int _size);

#endif