// PRACTICA 11
// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 07/11/2026
// Número de ejercicio: 7

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct Producto
{
    string nombre;
    string codigo;
    double precio;
};

void analizarInventario(vector<Producto> productos)
{
    int caro = 0;
    int barato = 0;

    for (int i = 1; i < productos.size(); i++)
    {
        if (productos[i].precio > productos[caro].precio)
        {
            caro = i;
        }

        if (productos[i].precio < productos[barato].precio)
        {
            barato = i;
        }
    }

    cout << "\nPRODUCTO MAS CARO" << endl;
    cout << "Nombre: " << productos[caro].nombre << endl;
    cout << "Codigo: " << productos[caro].codigo << endl;
    cout << "Precio: $" << productos[caro].precio << endl;

    cout << "\nPRODUCTO MAS BARATO" << endl;
    cout << "Nombre: " << productos[barato].nombre << endl;
    cout << "Codigo: " << productos[barato].codigo << endl;
    cout << "Precio: $" << productos[barato].precio << endl;
}

int main()
{
    int n;

    cout << "ANALISIS DE INVENTARIO" << endl;

    cout << "Ingrese la cantidad de productos: ";
    cin >> n;

    while (n <= 0)
    {
        cout << "Ingrese una cantidad mayor a cero: ";
        cin >> n;
    }

    vector<Producto> productos(n);

    for (int i = 0; i < n; i++)
    {
        cout << "\nPRODUCTO " << i + 1 << endl;

        cout << "Ingrese el nombre: ";
        cin >> ws;
        getline(cin, productos[i].nombre);

        cout << "Ingrese el codigo: ";
        getline(cin, productos[i].codigo);

        cout << "Ingrese el precio: ";
        cin >> productos[i].precio;
    }

    cout << fixed << setprecision(2);

    analizarInventario(productos);

    return 0;
}