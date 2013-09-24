#include "util.h"

int
main()
{
	int i;

	int * array = NULL;
	int arraySize;

	if(readInputFile("donneesTab1.txt", &array, &arraySize))
	{
		for (i = 0; i < arraySize ; i++)
		{
			printf("Numero %d: %d\n", i, array[i]);
		}
	}

	return 0;
}