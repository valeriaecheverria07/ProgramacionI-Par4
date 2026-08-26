// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 25/08/2026
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int suma = 0, cuadrado;

    for(int i=1;i<=10;i++){
        cuadrado = i * i;
        suma += cuadrado;
    }

    cout<<"El resultado de la suma es: "<<suma<<endl;

    getch();
    return 0;
}