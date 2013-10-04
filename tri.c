#include "tri.h"
#include "tas.h"
#include "util.h"

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

void triTas(int * _array, int _arraySize)
{
	int index;
	Tas * tas = construireTasMax(_array, _arraySize);
	for (index = _arraySize-1; index >= 1; index--)
	{
		echanger(&tas->array, tas->length, index, 0);
		tas->length--;
		entasserMax(tas, 0);
	}
	
	detruireTas(tas);
}
