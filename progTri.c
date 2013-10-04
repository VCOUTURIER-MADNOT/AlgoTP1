#include "util.h"
#include "tri.h"
#include "tas.h"
#include <time.h>

int
main()
{
	int * array  = NULL;
	int * array2 = NULL;
	int arraySize;

	time_t debut, millieu, fin;
	double dureeInsert, dureeTas;

	arraySize = 1000000;
	array = randomArray(arraySize);
	array2 =(int *) arrayCopy(array, arraySize);

	debut = time(NULL);
	triInsertion(array, arraySize);
	millieu = time(NULL);
	triTas( array2, arraySize);
	fin = (time(NULL));

	dureeInsert = difftime(millieu, debut);
	dureeTas = difftime(fin, millieu);

	printf("Le temps du tri par insertion est de : %f \n", dureeInsert );
	printf("Le temps du tri par tas est de : %f \n", dureeTas );
	
	return 0;
}