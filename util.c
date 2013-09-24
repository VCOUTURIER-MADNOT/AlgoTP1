#include "util.h"

int
readInputFile(const char * _filename, int ** _array, int * _arraySize)
{
	int i;

	FILE * file = NULL;


	file = fopen(_filename, "r");

	if (file != NULL)
	{
		fscanf(file, "%d", _arraySize);

		(*_array) = (int *)malloc(sizeof(int) * (*_arraySize));

		for(i = 0; i < (*_arraySize); i++)
		{
			int nextInt;

			fscanf(file, "%d", &nextInt);
			(*_array)[i] = nextInt;
		}
		fclose(file);
		return 1;
	}	

	return 0;
}