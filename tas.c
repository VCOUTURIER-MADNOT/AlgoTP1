#include "tas.h"
#include "util.h"

int parent(int _index)
{
	return (_index < 0 ? -1 : (_index-1)/2);
}

int gauche(int _index)
{
	return (_index < 0 ? -1 : 2*_index + 1);
}

int droite(int _index)
{
	return (_index < 0 ? -1 : (2*_index +2));
}

void entasserMax(Tas * _tas, int _index)
{
	int g = gauche(_index);
	int d = droite(_index);
	int max;

	if (g < _tas->length && _tas->array[g] > _tas->array[_index])
	{
		max = g;
	}
	else
	{
		max = _index;
	}

	if ( d < _tas->length && _tas->array[d] > _tas->array[max])
	{
		max = d;
	}

	if (max != _index)
	{
		echanger( &_tas->array, _tas->length, _index, max);
		entasserMax(_tas, max);
	}
}

Tas * construireTasMax(int * _array, int _size)
{
	Tas * tas;
	int i;

	tas = (Tas *) malloc (sizeof(Tas));
	tas->length = _size;
	tas->size = _size;
	tas->array = (int*) malloc (sizeof(int) * _size);
	for (i = 0; i < _size; i++)
	{
		tas->array[i] = _array[i];
	}

	for (i = ((_size-1)/2); i >= 0; i--)
	{
		entasserMax(tas, i);
	}

	return tas;
}

void detruireTas(Tas * tas)
{
	free(tas->array);
	free(tas);
}