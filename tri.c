#include "tri.h"

void triInsertion(int * _array, int _taille)
{
	int i, j;
	int cle;

	for (j = 1; j < _taille; j++)
	{
		cle = _array[j];
		i = j-1;
		while(i>=0 && _array[i]>cle){
			_array[i + 1] = _array[i];
			i = i-1;
		}
		_array[i+1] = cle;
	}
}
