// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 06/09/2026
// Número de ejercicio: 2

#include <iostream>

using namespace std;

void ModificarValores(int numero1, int &numero2)
{
    numero1 = numero1 * 2;
    numero2 = numero2 + 10;

    cout << "Dentro de la funcion:" << endl;
    cout << "Numero 1: " << numero1 << endl;
    cout << "Numero 2: " << numero2 << endl;
}

int main()
{
    int numero1;
    int numero2;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    cout << endl;
    cout << "Antes de llamar a la funcion:" << endl;
    cout << "Numero 1: " << numero1 << endl;
    cout << "Numero 2: " << numero2 << endl;

    ModificarValores(numero1, numero2);

    cout << endl;
    cout << "Despues de llamar a la funcion:" << endl;
    cout << "Numero 1: " << numero1 << endl;
    cout << "Numero 2: " << numero2 << endl;

    return 0;
}