/* Ejercicio 0 */

//Este es un comentario de una sola linea

/*Este es 
un comentario de varias 
lineas  */

/*
Sitio Oficial 
https://isocpp.org/
*/

//Paso 1 Declaracion de librerias
#include<iostream>
#include<stdlib.h>
#include<math.h>

/*Se declara las librerias para poder usar las herramientas necesarias en este lenguaje */

//Paso 2 Inicio de la funcion principal

using namespace std;
int main() {
    //Paso 3 Declaracion de variables
    
    //Declaracion de varibales Inicio
    int Numero; //int valores tipo entero  de -284 a +284 es un ejemplo no es rango verdadero de alcanze
    float Peso; //Valores que ya tienen punto decimal  -284.156 a +284.156
    char letra; //Valores para tipo texto pero en este caso solo es para usar el espacio de una letra V
    string palabra; //Valores para tipo texto y aqui ya es un conjunto de cadenas de texto o letras  palabra
    bool correcto = false; //Valores booleanos verdadero o falso considerando que verdadero es 1 y falso es 0 
    
    /*Existe mas tipos de variables pero al final serian la extencionde la precision y/o alcanze de cada 
    tipo de dato 
    mostrado actualmente*/
    
    //Exite dos formas de declarar una constante 
    //Forma 1
    const double Pi=3.1416;
    //Forma 2 
    #define  float gravedad=9.81; 

    //Fin de declaracion de variables

    //Paso 4 Desarrollo de mi codigo
    cout<<"Hola mi lenguaje de programacion es C++ hijo de C"<<endl;
    cout<<"Es un lenguaje de tipado fuerte  y estatico"<<endl;



    return 0;
}

