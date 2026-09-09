// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 06/09/2026
// Número de ejercicio: 4

#include <iostream>

using namespace std;

double CalcularPrecioTotal(double precio, double impuesto = 13)
{
    double precioTotal;

    precioTotal = precio + (precio * impuesto / 100);

    return precioTotal;
}

int main()
{
    double precio;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    cout << "Precio total con IVA: "
         << CalcularPrecioTotal(precio) << " Bs" << endl;

    return 0;
}