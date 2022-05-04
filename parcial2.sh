#! /bin/bash


#verifiquemos que no sobre escribimos los archivos
filename='parcial.txt'
if [ -f $filename ]; then
   rm parcial.txt
   rm parcial.jpeg
   echo "$filename se elimino, crearemos uno nuevo."
fi

#imprimamos el contenido para gnuplot en un archivo
echo 'unset label
clear 
set terminal jpeg
set output "parcial.jpeg"
set title "Funcion Parcial 2,2"
set xlabel "x" 
set ylabel "exp(-x^2/2)-0.5" 
set grid
set style data linespoints
plot exp(-(x*x)**2/2)-0.5' >> parcial.txt

#abramos gnuplot
gnuplot "parcial.txt"

#compilemos el programa en c
gcc -o parcial2p2.out parcial2p2.c -lm 
./parcial2p2.out
