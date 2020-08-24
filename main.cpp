#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <stdlib.h>

float nueces;
float ttomado;

void tomar(float c, char* a); //funcion de tomar

using namespace std;

int main()
{
    float cantidad;
    char a1[] = "uno"; // nombres de las ardillas
    char a2[] = "dos";
    char a3[] = "tres";
    cout << "Bienvenido al programa de Ardillas!" << endl;
    cout << "Ingrese el numero de nueces que tiene el arbol!!!" << endl;
    cin >> cantidad;
    if( cantidad < 7.2){
     cout << "La cantidad ingresada no es valida"<<endl;
    }
    else{
    nueces = cantidad;
    tomar(cantidad, a1);
    cout <<"nueces restantes"<<endl;
    cout << nueces << endl;
    tomar(nueces, a2);
    cout <<"nueces restantes"<<endl;
    cout << nueces << endl;
    tomar(nueces, a3);
    cout << "las nueces restantes:"<<endl;
    cout << nueces <<endl;
    ttomado = cantidad - nueces;
    cout << "el total de las nueces tomadas por todas las ardillas es:"<<endl;
    cout << ttomado <<endl;
    return 0;
}
}


void tomar(float c, char* a){

// 'c' es la cantidad y 'a' es la ardilla
    float cantidadE = c; // cantidadE = cantidad de entrada de nueces en el arból
    char* ardilla = a;  // ardilla tomada por parametro
    float tomado;  // variable local, indica cuanto toma del arból en una instacia
    float cantidadS;

    tomado = cantidadE/3;
    //printf("ardilla1: %f", cantidad1);
    //printf("ardilla1: %f", cantidad1);
    tomado = tomado + 1;
    printf("esta ardilla es la: %s \n", ardilla);
    printf(" la ardilla tomo  en total la cantidad de: %f \n", tomado);
    cantidadS = cantidadE - tomado;
    nueces = cantidadS;
}


