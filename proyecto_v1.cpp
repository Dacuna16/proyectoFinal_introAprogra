
/**
 *
 *  Tarea 1: Eliminar bloques de un arreglo mediante corrimiento
 *  Autor: Diego Acuña Chavarría
 *  Fecha: 27 de Junio 2021
 *
 */


#include <iostream>

using namespace std;

#include <iomanip>
using std::setw;     //setw lo uso para poner x cantidad de espacios: setw(10)

#include <cstdlib> // contiene srand y rand
#include <ctime>

// Utilizo una variable constante para definir el tamano del arreglo, mejor practica obtenido del libro
const int tamanhoArreglo=9;

// Prototipo de la funcion llenarArreglo para llenar el arreglo original con 1s y 2s aleatorios
void llenarArreglo(int [][tamanhoArreglo], int);

// Prototipo de la funcion imprimirArreglo, usada para imprimir arreglo original y arreglo copia
void imprimirArreglo(int [][tamanhoArreglo]);

// Prototipo de la funcion copiarArreglo, hace una copia exacta del arreglo original
void copiarArreglo(int [][tamanhoArreglo], int [][tamanhoArreglo]);

// Prototipo de la funcion leerOpcion, tambien se asegura que el valor digitado este en el rango
int leerOpcion ();

// Prototipo de la funcion encuentraValor, recibe el arreglo y la opcion, y tamanio es global
void encuentraValor(int [][tamanhoArreglo], int);

// Prototipo de la funcion ordenarBloque,
void ordenarBloque(int);

// Prototipo de la funcion eliminar_rellenarCeros,
void eliminar_rellenarCeros(int , int [][tamanhoArreglo]);

// Prototipo de la funcion calcularRango
int calcularRango(int [][tamanhoArreglo]);


int opcion = 1;
int fila; // Esta variable va a almacenar la fila referente al input del usuario
int columna; // Esta variable va a almacenar la columna referente al input del usuario
int rango[9];

int main(){

}