/******************************************************************************\
*						 Definicao Valor(inicializacao)						 *
\******************************************************************************/

#include "defTipo.h"

/* Definicao da variaveis globais */
populacao popVelha , popNova;		
double *arq_media_fitness, *arq_melhor_fitness; 	// dados para serem gravados
double **arq_melhor_individuo;						// dados para serem gravados
Random *random;


// Parametros da simulacao
int nroMaxExec = 2;								// numero de repeticoes do AG
int maxGen = 2;									// numero maximo de geracoes 

// Parametros do AG
double taxaCross = 0.6;								// taxa de crossover
double taxaMut = 1.0/lcrom;							// taxa de mutacao

int tamPop = 10;									// tamanho da pop. 
int lcrom = 10;										// tamanho do cromossomo 

bool elitismo = true;								// true: elitismo ; false: sem elitismo
int tamTorneio = 3;									// tamanho do torneio (usado na selecao por torneio)
