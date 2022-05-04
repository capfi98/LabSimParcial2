/*
Autor:          captop
Compilador:     gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
Compilado:      gcc -o parcial2p2.out parcial2p2.c -lm
Fecha:          Sun Apr 24 21:51:06 CST 2022
Librerias:      stdio, math, stdlib
Resumen:        Metodo recursivo para encontrar raices de una funcion
                cualesquiera con derivadas continuas
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//declaramos funciones

float f(float x);
float df(float x);
void NewtonRaphson(float x0, float tol, int maxiter, int *actiter, float *sol);

void main (void)
{
    //definir variables
    float x_inicial, tolerancia, xS;
    int iteraciones, Aiteracion;

    //obterner datos
    printf("Ingrese el valor aproximado de x: ");
    scanf("%f", &x_inicial);
    printf("Ingrese el valor maximo de tolerancia: ");
    scanf("%f", &tolerancia);
    printf("Ingrese el valor maximo de iteraciones: ");
    scanf("%d", &iteraciones);
    //solucionar el problema
    NewtonRaphson(x_inicial , tolerancia , iteraciones , &Aiteracion , &xS);
    if (Aiteracion == iteraciones)
        printf("\nNo hay solucion despues de %d iteracciones\n", iteraciones);
    else
    {
        printf("\nLuego de %d iteraciones la solucion es %.4f\n", Aiteracion, xS);
    } 
}


//algoritmo de solucion
void NewtonRaphson(float x0, float tol, int maxiter, int *actiter, float *sol)
{
    //variables locales de iteracion
    float xant, x, dif;
    int i=1;
    xant=x0;
    //primera iteracion
    x=xant-f(xant)/df(xant);
    //verificar que es resta es menor a 0
    dif=x-xant;
    (dif<0)?dif=-dif:dif;
    printf("%f\n",dif);
    //realizar todas las iteraciones
    while (dif>tol && i<maxiter)
    {
        xant=x;
        x=xant-f(xant)/df(xant);
        i++;
        dif=x-xant;
        (dif<0)?dif=-dif:dif;
        printf("%f\n",dif);
    }
    //apuntar a la memoria para la respuesta
    *sol=x;
    *actiter = i;
}

//funcion
float f(float x)
{
    float res =0;
    res = exp(-pow((x*x),2)/2)-0.5;
    return res;
}

//funcion derivada
float df(float x)
{
    float res =0;
    res = -exp(-pow((x*x),2)/2)*x;
    return res;

}