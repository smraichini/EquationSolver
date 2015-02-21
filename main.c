/* 
 * File:   main.c
 * Author: Simone
 *
 * Created on 21 febbraio 2015, 11.24
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct num{
    float real;
    float immaginary;
};

typedef struct num number;
void insertCoefficent(int *a,int *b,int *c);

void insertCoefficent(int *a,int *b,int *c)
{
printf("Inserici il il coefficente A: ");
    scanf("%d",a);
    
    printf("Inserici il il coefficente B: ");
    scanf("%d",b);
    
    printf("Inserici il il coefficente C: ");
    scanf("%d",c);
}

int main(int argc, char** argv) {
    int a,b,c;
    insertCoefficent(&a,&b,&c);
    solutionCalculation(a,b,c);
    printSolution

    
    return (EXIT_SUCCESS);
}

