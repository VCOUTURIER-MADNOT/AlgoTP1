#include "tri.h"
#include "tas.h"
#include "util.h"

int
main()
{
	int * array = NULL;
	int arraySize;

	if(readInputFile("donneesTab1.txt", &array, &arraySize))
	{
		printArrayContent(array, arraySize);

		triInsertion(array, arraySize);

		printArrayContent(array, arraySize);
	}

	return 0;
}