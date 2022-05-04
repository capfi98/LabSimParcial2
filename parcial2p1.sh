#! /bin/bash


#verifiquemos que no sobre escribimos los archivos
filename='datosparcial21.txt'
filename1='parcial2p1.jpeg'
filename2='datosparcial212.txt'
if [ -f $filename ]; then
   rm $filename
   rm $filename1
   rm $filename2
   echo "$filename, $filename1, $filename2 se elimino, crearemos uno nuevo."
fi

#recolectamos los datos para tabular
echo 't   dt    vel
2.1 0.1 1
3.0 0.1 3
5.2 0.1 8
7.1 0.1 11
9.2 0.1 14
10.1    0.1 18' >> datosparcial21.txt


#imprimamos el contenido para gnuplot en un archivo
echo 'unset label
clear 
set terminal jpeg
set output "parcial2p1.jpeg"
set title "Funcion Parcial 2,1"
set xlabel "tiempo (t)" 
set ylabel "velocidad (m/s)" 
set grid
set style data linespoints
cd '\''/home/captop/ejercicio_docker'\'' 
plot "datosparcial21.txt" u 1:3:2 w xerrorbars , 1.979758*x -2.942849 ' >> datosparcial212.txt

#abramos gnuplot
gnuplot "datosparcial212.txt"

#compilemos el programa en c
gcc -o parcial2p1.out parcial2p1.c -lm
./parcial2p1.out
