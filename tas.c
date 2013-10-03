#include "tas.h"
#include "util.h"

int parent(int _index)
{
	return _index/2;
}

int gauche(int _index)
{
	return 2*_index;
}

int droite(int _index)
{
	return (2*_index +1);
}

void entasserMax(Tas * _tas, int _index)
{
	int g = gauche(_index);
	int d = droite(_index);
	int max = _index;

	if (g <= (*_tas).length && (*_tas).array[g] > (*_tas).array[_index])
	{
		max = g;
	}
	else if ( d <= (*_tas).length && (*_tas).array[d] > (*_tas).array[_index])
	{
		max = d;
	}

	if (max != _index)
	{
		printf("on echange l'indice %d et %d", _index, max);
		echanger( &(*_tas).array, (*_tas).length, _index, max);
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
	printf("****************\n");
	printArray(tas->array, _size);

	for (i = ((_size/2)-1); i >= 0; i--)
	{
		entasserMax(tas, i);
		printf("******\n");
		printArray(tas->array, _size);
	}

	return tas;
}

void detruireTas(Tas * tas)
{
	free(tas->array);
	free(tas);
}