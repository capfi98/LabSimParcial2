# LabSimParcial2
Problema 1

Metodología:
Iniciamos generando un archivo .c, que logre las siguientes funciones:
  Definir dos tipos de vectores, de los cuales, uno representa velocidad y el otro tiempo.
  Dar una cantidad n de elementos, segun los vectores.
  Imprimir los datos de los vectores de forma tabulada.
  Definir una suma de elementos de cada vector.
  Definir una suma del producto de elementos i-esimos, uno a uno de ambos vectores.
  Por ultimo, definir las funciones m, b y r, y imprimir lo que se pide:
    la ecuacion resultante lineal, R^2, aceleracion, velocidad a los 15 segundos despues (de lo cual se calcula)

Segundo, por medio de un archivo .sh:
  Asumiendo existan archivos iguales, se borraran siendo estos archivos
    la tabla de datos de velocidad tiempo mas incerteza.
    imagen generada por gnuplot.
    archivo de texto que contenga las instrucciones para gnuplot.
   
   De esto, generaremos la grafica deseada, y al mismo tiempo, corremos el programa de c.
   
Abstracción: 
Se considera inicialmente hacer todo de forma ordenada y algo extendida. 
  En el archivo bash (.sh) se pretende obtener un algoritmo lineal y progresivo, donde a base de instrucciones
  consecutivas, lograr tanto los datos tabulados, las instrucciones para gnuplot, y generar la imagen de gnuplot.
  Seguido unicamente inicializar y correr el archivo de .c.
  
  Para el algoritmo de c (.c), 
    sabiendo que hablamos de un conjunto de ecuaciones, se trataron las ecuaciones de forma separada, para final-
    mente, unirlas en una funcion principal, optimizando el codigo y simplificando el procedimiento.
    
Pseudocodigo
  Definir dos vectores x, y
  Obtener la cantidad de elementos de cada vector
  Imprimir en forma de lista los elementos de los vectores
  Definir la suma de elementos (i++)
  Definir la suma del producto de los elementos de los vectores (i*i, i++)
  Definir m, b y r en términos de I y II.
  Mostrar y(x) = m*x+b y r*r
  Fin 
  
Respuestas: 
y = 1.979758x -2.942849
Coeficiente de determinacion: 0.985810
La aceleracion es: 1.979758
La velocidad despues de 15 segundos son: 26.753513

Problema 2

Metodología:
Iniciamos generando un archivo .c, que logre las siguientes funciones:
  Definir una funcion de la cual queremos encontrar los ceros por medio de un metodo numerico.
  Definir su funcion derivada.
  Definir el metodo numerico, utilizando los elementos anteriores 
  Imprimir los datos obtenidos hasta que nuestra solucion converja.
  
Segundo, por medio de un archivo .sh:
  Asumiendo existan archivos iguales, se borraran siendo estos archivos
    imagen generada por gnuplot.
    archivo de texto que contenga las instrucciones para gnuplot.
   
   De esto, generaremos la grafica deseada de la funcion a estudiar en el metodo numerico, 
   y al mismo tiempo, corremos el programa de c.
   
Abstracción: 
Se considera inicialmente hacer todo de forma ordenada y algo extendida. 
  En el archivo bash (.sh) se pretende obtener un algoritmo lineal y progresivo, donde a base de instrucciones
  consecutivas, brindar las instrucciones para gnuplot, generar la imagen de gnuplot de nuestra funcion de interes y
  seguido unicamente inicializar y correr el archivo de .c.
  
  Para el algoritmo de c (.c), 
    Debido a que es un metodo numerico, se considera partir en partes el metodo, inicialmente definiendo la funcion y
    su derivada, y seguido adjuntar todo lo anterior en una funcion principal.
    
Pseudocodigo
  Ingresar x_inicial, tolerancia y número de iteraciones
  Definir f(x) y df(x)
  Definir el método Newton Raphson
  i=1, xant=x_inicial, x=xant-f(x_inicial)/df(x_inicial) y dif=x-xant
  Imprimir resultado i=1
  Si dif>tol>0 y i<iteraciones -> continuar lo anterior con i=2,…,n.
  Imprimir resultado i=2,…,n
  Si iteracion=n, no se encontró solución, sino, se encontró solución.

  
Respuestas: 
Ingrese el valor aproximado de x: 0.7   
Ingrese el valor maximo de tolerancia: 0.005
Ingrese el valor maximo de iteraciones: 10
0.623176
0.993970
1.509860  <------ esta es la raiz, sin embargo, la respuesta empieza a oscilar.
82.313057
inf
-nan

Luego de 6 iteraciones la solucion es -nan
  
  


