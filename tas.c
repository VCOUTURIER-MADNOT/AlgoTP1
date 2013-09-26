#include "tas.h"

int
parent(int _index)
{
	/* Return the trunc for (_index / 2), if _index < 0, return -1  */
	return (_index < 0 ? -1 : (int)(_index/2.0));
}

int 
gauche(int _index)
{
	/* Return 2 * _index, if _index < 0, return -1  */
	return (_index < 0 ? -1 : 2 * _index);
}

int 
droite(int _index)
{
	/* Return 2*_index + 1, if _index < 0, return -1  */
	return (_index < 0 ? -1 : 2*_index + 1);
}