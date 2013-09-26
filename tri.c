#include "tri.h"

void
triInsertion(int * _array, int _arraySize)
{
	int i, j;
	int key;

	for(i = 1; i < _arraySize; i++)
	{
		key = _array[i];
		j = i - 1;
		while(j >= 0 && _array[j] > key)
		{
			_array[j+1] = _array[j];
			j = j - 1;
		}
		_array[j+1] = key;
	}
}

