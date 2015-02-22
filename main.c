/* 
 * File:   main.c
 * Author: Simone
 *
 * Created on 21 febbraio 2015, 11.24
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Creazione di un record per la memorizzazione dei numeri complessi
 *e definizione di un tipo di dato denominato "number"
 */
struct num{
    float real;
    float immaginary;
};
typedef struct num number;

//Dichiarazione dei prototipi delle funzioni
void printSolution(number x1,number x2);
void insertCoefficent(int *a,int *b,int *c);
void solutionCalculation(int a,int b,int c, number *x1, number *x2,int *real);
number calcX1(int a, int b, int c,int real,float det);
number calcX2(int a, int b, int c,int real,float det);
float determinant(int a, int b, int c, int *real);

void insertCoefficent(int *a,int *b,int *c)
{
printf("Inserici il il coefficente A: ");                      //Funzione che richiede come imput i
    scanf("%d",a);                                             //coefficenti dell'equazione
    
    printf("Inserici il il coefficente B: ");
    scanf("%d",b);
    
    printf("Inserici il il coefficente C: ");
    scanf("%d",c);
}
void solutionCalculation(int a,int b,int c, number *x1, number *x2, int *real)
{
    float det=determinant(a,b,c,real);
    *x1=calcX1(a,b,c,*real,det);
    *x2=calcX2(a,b,c,*real,det);

}

void printSolution(number x1,number x2)
{
    printf("X1= %f + %fi\n",x1.real,x1.immaginary);
    printf("X2= %f - %fi\n",x2.real,x2.immaginary);
}

number calcX1(int a, int b, int c, int real,float det)
{
    number x1;
    if(real==0)
    {
        x1.real=-b;
        x1.real=x1.real/(2*a);
        x1.immaginary=(sqrt(det)/(2*a));
    }
    else
    {
        x1.real=-b+sqrt(det);
        x1.real=x1.real/(2*a);
        x1.immaginary=0;
    }
    return x1;
}

number calcX2(int a, int b, int c,int real,float det)
{
number x2;
    if(real==0)
    {
        x2.real=-b;
        x2.real=x2.real/(2*a);
        x2.immaginary=(sqrt(det)/(2*a));
    }
    else
    {
        x2.real=-b-sqrt(det);
        x2.real=x2.real/(2*a);
        x2.immaginary=0;
    }
return x2;
}

float determinant(int a, int b, int c, int *real)
{
    int d=(pow(b,2)-(4*a*c));
    float det;
    if(d<0)
    {
        *real=0;
        det=(d*-1);
    }
    else
    {
     *real=1;
      det=d;
    }
    
    return det;
}
int main(int argc, char** argv) 
{
    //Dichiarazione delle variabili
    number x1,x2;
    int a,b,c;
    int real=1;
    insertCoefficent(&a,&b,&c);
    solutionCalculation(a,b,c,&x1,&x2,&real);
    printSolution(x1,x2);

    
    return (EXIT_SUCCESS);
}

