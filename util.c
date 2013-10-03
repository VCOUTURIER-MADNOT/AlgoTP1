#include "util.h"

int
readInputFile(const char * _filename, int ** _array, int * _arraySize)
{
	int i;

	FILE * file = NULL;


	file = fopen(_filename, "r");

	if (file != NULL)
	{
		fscanf(file, "%d", _arraySize);

		(*_array) = (int *)malloc(sizeof(int) * (*_arraySize));

		for(i = 0; i < (*_arraySize); i++)
		{
			int nextInt;

			fscanf(file, "%d", &nextInt);
			(*_array)[i] = nextInt;
		}
		fclose(file);
		return 1;
	}	

	return 0;
}

void echanger(int ** _array, int _arraySize ,int _indexA, int _indexB)
{
	int temp;

	if (_indexA < _arraySize && _indexB < _arraySize)
	{
		temp = (int) _array[_indexA];
		(*_array)[_indexA] = (*_array)[_indexB];
		(*_array)[_indexB] = temp;
	}
}

void printArray(int * _array, int _size)
{
	int i;
	for (i = 0; i < _size ; i++)
	{
		printf("Numero %d: %d\n", i, _array[i]);
	}
}