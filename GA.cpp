/******************************************************
* This project executes the Geneic Algorithm with C++
* to solve the knapsack problem. The procedure is 
* seperate to following steps:
*
* Encode
* Create Population
* Create Individual
* START
* 
* Generate the initial population
* Compute fitness
* REPEAT
*     Selection
*     Crossover
*     Mutation
*     Compute fitness
* UNTIL population has converged
* STOP
******************************************************/
#include <iostream>	    /* standard input/output. */

#include "GA_Class.h"
using namespace std;

/*Geneic Algorithm definition*/
#define POP_SIZE  20     /*number of Individual*/
#define IND_SIZE  1      /*number of Chromosome. */
                         /*chromosome is the encoded number of individual(set of gene)*/
                         /*In here, the individual is equivalent to chromosome*/
#define MUT_RATE  0.5    /*mutation rate*/
#define ITERATION 2000   /*Numbers of iterations*/

/*Knapsack problem definition*/
#define CAPACITY         100 /*Capacity of the knapsack*/
#define ITEM_CATEGORY    20  /*Number of category*/
#define ITEM_BOUNDARY    1   /*Number of item. 1 represent 0-1 knapsack problem*/

int main()
{
    /*Create Population*/
    /*Note: when population is created, the individuals, chromosomes, and gene is also created by random value.*/
    
}
#endif
