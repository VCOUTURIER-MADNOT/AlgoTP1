#include "util.h"
#include "tri.h"
#include "tas.h"

int
main()
{
	int * array = NULL;
	int arraySize;
	Tas * tas;

	if(readInputFile("donneesTab1.txt", &array, &arraySize))
	{
		printArray( array, arraySize);
		triInsertion( array, arraySize);
		printf("******\n");
		printArray( array, arraySize);
		tas = construireTasMax( array, arraySize);
		printf("******\n");
		printArray(tas->array, tas->length);
		detruireTas(tas);
	}

	return 0;
}