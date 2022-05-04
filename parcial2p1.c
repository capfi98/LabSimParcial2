/*
Autor:          captop
Compilador:     gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
Compilado:      gcc -o parcial2p1.out parcial2p1.c -lm
Fecha:          Mon May  2 02:50:59 CST 2022
Librerias:      stdio, math.h
Resumen:        
*/

//librerias
#include <stdio.h>
#include <math.h>

//declaro e inicializo variables globales
float x[]={2.1, 3, 5.2, 7.1, 9.2, 10.1}, y[]={1, 3, 8, 11, 14, 18};
//medimos el tamaño del vector por medio del tamaño de los bytes que ocupa cada elemento
int n = sizeof(x)/sizeof(x[0]);

//prototipar funciones
void imprimir(float datos[]);
float suma(float datos[]);
float sumaMulti(float datos1[], float datos2[]);

void main(){
    //Se declaran las variables del problema
    float b, m, r;
    //imprimo los valores de los vectores para que el usuario sepa la info
    imprimir(x);
    imprimir(y);
    //los valores de ecuacion lineal, por medio de minimos cuadrados
    m = (n*sumaMulti(x,y) - (suma(x)*suma(y)))/(n*sumaMulti(x,x)-(suma(x)*suma(x)));
    b = (suma(y)-m*suma(x))/n ;
    r = (n*sumaMulti(x,y) - (suma(x)*suma(y)))/sqrt((n*sumaMulti(x,x)-(suma(x)*suma(x)))*(n*sumaMulti(y,y)-(suma(y)*suma(y))));
    //imprime la ecuacion lineal
    printf("y = %fx %f\n", m,b);
    //imprime coeficiente de determinacion, el r cuadrado
    printf("Coeficiente de determinacion: %f\n", r*r);
    printf("La aceleracion es: %f\n", m);
    printf("La velocidad despues de 15 segundos son: %f\n",m*(15)+b);
    }

//imprimir los datos del vector que ingrese a la funcion
void imprimir(float datos[]){
    puts("Valor de los datos");
    for (int i = 0; i < n; i++)
    {
        printf("%f ", datos[i]);
    }
    puts("\n");
}

//realiza la suma de los elementos de un vector ingresado
float suma(float datos[]){
    float resp =0;
    for (int i =0; i < n; i++)
    {
        resp += datos[i];
    }
    return resp;
}

//realiza la suma de los elementos multiplicados de dos vector ingresado
float sumaMulti(float datos1[], float datos2[]){
    float resp =0;
    for (int i =0; i < n; i++)
    {
        resp += datos1[i]*datos2[i];
    }
    return resp;
}
