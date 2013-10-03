#ifndef DEF_TAS
#define DEF_TAS

	typedef struct
	{
		int length;
		int size;
		int * array;
	} Tas;

	int parent(int _index);
	int gauche(int _index);
	int droite(int _index);

	void entasserMax(Tas * _tas, int _index);
	Tas * construireTasMax(int * _array, int _size);
	void detruireTas(Tas * tas);

#endif