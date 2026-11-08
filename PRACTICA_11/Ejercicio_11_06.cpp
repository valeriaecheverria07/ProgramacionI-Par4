// PRACTICA 11
// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 07/11/2026
// Número de ejercicio: 6

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Contacto
{
    string nombreCompleto;
    int telefono;
};

void buscarContactos(vector<Contacto> contactos, string busqueda)
{
    bool encontrado = false;

    cout << "\nRESULTADOS DE LA BUSQUEDA" << endl;

    for (int i = 0; i < contactos.size(); i++)
    {
        if (contactos[i].nombreCompleto.find(busqueda) != string::npos)
        {
            cout << "\nNombre: " << contactos[i].nombreCompleto << endl;
            cout << "Telefono: " << contactos[i].telefono << endl;

            encontrado = true;
        }
    }

    if (encontrado == false)
    {
        cout << "No se encontraron contactos." << endl;
    }
}

int main()
{
    int n;
    string busqueda;

    cout << "BUSCADOR DE CONTACTOS" << endl;

    cout << "Ingrese la cantidad de contactos: ";
    cin >> n;

    while (n <= 0)
    {
        cout << "Ingrese una cantidad mayor a cero: ";
        cin >> n;
    }

    vector<Contacto> contactos(n);

    for (int i = 0; i < n; i++)
    {
        cout << "\nCONTACTO " << i + 1 << endl;

        cout << "Ingrese el nombre completo: ";
        cin >> ws;
        getline(cin, contactos[i].nombreCompleto);

        cout << "Ingrese el telefono: ";
        cin >> contactos[i].telefono;
    }

    cout << "\nIngrese el nombre o texto que desea buscar: ";
    cin >> ws;
    getline(cin, busqueda);

    buscarContactos(contactos, busqueda);

    return 0;
}