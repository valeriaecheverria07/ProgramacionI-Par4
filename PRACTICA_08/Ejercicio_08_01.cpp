// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 3/10/2026
// Número de ejercicio: 1

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


void mostrarPersona(string nombres[], string apellidos[], int edades[])
{
    int limiteInferior = 0;
    int limiteSuperior = 9;

    int posicionNombre;
    int posicionApellido;
    int posicionEdad;

    posicionNombre = limiteInferior + rand() % (limiteSuperior - limiteInferior + 1);
    posicionApellido = limiteInferior + rand() % (limiteSuperior - limiteInferior + 1);
    posicionEdad = limiteInferior + rand() % (limiteSuperior - limiteInferior + 1);

    cout << "Nombre: " << nombres[posicionNombre] << endl;
    cout << "Apellido: " << apellidos[posicionApellido] << endl;
    cout << "Edad: " << edades[posicionEdad] << endl;
}


int main()
{
    srand(time(0));

    string nombres[10] = {
        "Juan", "Maria", "Carlos", "Ana", "Pedro",
        "Lucia", "Mario", "Sofia", "Diego", "Laura"
    };

    string apellidos[10] = {
        "Perez", "Gomez", "Rojas", "Mamani", "Lopez",
        "Flores", "Vargas", "Torrez", "Rivera", "Castro"
    };

    int edades[10] = {
        18, 20, 21, 19, 23,
        25, 22, 24, 26, 27
    };

    int N;

    cout << "Cuantas personas desea generar: ";
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cout << endl;
        cout << "Persona " << i + 1 << endl;

        mostrarPersona(nombres, apellidos, edades);
    }

    return 0;
}