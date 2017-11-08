/******************************************************************************\
*								Funcoes diversas						 *
\******************************************************************************/
#include "defTipo.h"
#include <cstdlib>
#include <cmath>


/******************************************************************************\
*								 Dynamic Allocation: Matrix of Integers					 *
\******************************************************************************/
int **aloc_matrixi(int lines , int collums)
{
	int i, **Matrix;
	
	Matrix = new int*[lines];
	for (i=0;i<lines;i++) {
		Matrix[i] = new int[collums];
	}
	if (!Matrix) {
		cout<<"Allocation Error!"<<endl;
		exit(1);
	}

	return Matrix;
}

/******************************************************************************\
*								 Dynamic Allocation: Matrix of Doubles					 *
\******************************************************************************/
double **aloc_matrixd(int lines , int collums)
{
	int i;
	double **Matrix;
	
	Matrix = new double*[lines];
	for (i=0;i<lines;i++) {
		Matrix[i] = new double[collums];
	}
	if (!Matrix) {
		cout<<"Allocation Error!"<<endl;
		exit(1);
	}

	return Matrix;
}


/******************************************************************************\
*								Dynamic Allocation: Vector of Integers						 *
\******************************************************************************/
int *aloc_vectori(int lines)
{
	int *vector;

	vector = new int[lines];
	if (!vector) {
		cout<<"Allocation Error!"<<endl;
		exit(1);
	}
	return vector;
}
/******************************************************************************\
*								Dynamic Allocation: Vector of Doubles						 *
\******************************************************************************/
double *aloc_vectord(int lines)
{
	double *vector;

	vector = new double[lines];
	if (!vector) {
		cout<<"Allocation Error!"<<endl;
		exit(1);
	}
	return vector;
}


/******************************************************************************\
*								Dynamic Allocation: Vector of individuals						 *
\******************************************************************************/
individuo *aloc_vectorind(int lines)
{
	individuo *vector;

	vector = new individuo[lines];
	if (!vector) {
		cout<<"Allocation Error!"<<endl;
		exit(1);
	}
	return vector;
}

/******************************************************************************\
*								 Dynamic Desallocation: Matrix of Integers					 *
\******************************************************************************/
void desaloc_matrixi(int **Matrix , int lines)
{
	int i;

	for(i=0;i<lines;i++) {
		delete [] Matrix[i];
	}
	delete [] Matrix;

}

/******************************************************************************\
*								 Dynamic Desallocation: Matrix of Doubles				 *
\******************************************************************************/
void desaloc_matrixd(double **Matrix , int lines)
{
	int i;

	for(i=0;i<lines;i++) {
		delete [] Matrix[i];
	}
	delete [] Matrix;

}


/******************************************************************************\
*								 Random Integer between L_range and H_range			 *
\******************************************************************************/
int random_int(int L_range, int H_range)
{
	return(  (int) ( (rand()/(RAND_MAX+1.0))*(H_range-L_range+1)+L_range ) );  // random integer beteween [L_range and H_range]
}

/******************************************************************************\
*								 Random double in [0.0,1.0]			 *
\******************************************************************************/
double random_dou(void)
{
	return(  rand() / double(RAND_MAX) );  //  random double in [0.0, 1.0]:
}


