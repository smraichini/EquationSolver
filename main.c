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
void solutionCalculation(int a,int b,int c, number *x1, number *x2);
void printSolution(number x1,number x2);
number calcX1(int a, int b, int c);
number calcX2(int a, int b, int c);
float determinant(int a, int b, int c);

void insertCoefficent(int *a,int *b,int *c)
{
printf("Inserici il il coefficente A: ");
    scanf("%d",a);
    
    printf("Inserici il il coefficente B: ");
    scanf("%d",b);
    
    printf("Inserici il il coefficente C: ");
    scanf("%d",c);
}
void solutionCalculation(int a,int b,int c, number *x1, number *x2)
{
    *x1=calcX1(a,b,c);
    *x2=calcX2(a,b,c);

}

void printSolution(number x1,number x2)
{
    printf("X1= %f + %fi",x1.real x1.immaginary);
    printf("X2= %f + %fi",x2.real x2.immaginary);
}

number calcX1(int a, int b, int c)
{
    
}

number calcX2(int a, int b, int c)
{

}

float determinant(int a, int b, int c)
{
    if((pow(b,2)-(4*a*c))<0)
    {
    
    }
}
int main(int argc, char** argv) {
    number x1,x2;
    int a,b,c;
    insertCoefficent(&a,&b,&c);
    solutionCalculation(a,b,c,&x1,&x2);
    printSolution(number x1,number x2);

    
    return (EXIT_SUCCESS);
}

