// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 19/10/2026
// Número de ejercicio: 4

#include <iostream>
#include <vector>

using namespace std;

void LlenarVector(vector<double>& precios, int n)
{
    double precio;

    for(int i = 0; i < n; i++)
    {
        cout << "Ingrese precio del producto " << i + 1 << ": ";
        cin >> precio;

        precios.push_back(precio);
    }
}

void MostrarVector(vector<double> precios)
{
    for(int i = 0; i < precios.size(); i++)
    {
        cout << precios[i] << " Bs" << endl;
    }
}

void OrdenarSeleccion(vector<double>& precios)
{
    int menor;
    double auxiliar;

    for(int i = 0; i < precios.size() - 1; i++)
    {
        menor = i;

        for(int j = i + 1; j < precios.size(); j++)
        {
            if(precios[j] < precios[menor])
            {
                menor = j;
            }
        }

        auxiliar = precios[i];
        precios[i] = precios[menor];
        precios[menor] = auxiliar;
    }
}

void PrecioBarato(vector<double> precios)
{
    cout << "Precio mas barato: " << precios[0] << " Bs" << endl;
}

void PrecioCaro(vector<double> precios)
{
    cout << "Precio mas caro: "
         << precios[precios.size() - 1] << " Bs" << endl;
}

void CalcularMediana(vector<double> precios)
{
    int n = precios.size();
    double mediana;

    if(n % 2 == 0)
    {
        mediana = (precios[n / 2 - 1] + precios[n / 2]) / 2;
    }
    else
    {
        mediana = precios[n / 2];
    }

    cout << "Mediana: " << mediana << " Bs" << endl;
}


int main()
{
    vector<double> precios;
    int n;

    cout << "Ingrese cantidad de productos: ";
    cin >> n;

    if(n > 0)
    {
        LlenarVector(precios, n);

        cout << endl;
        cout << "PRECIOS ORIGINALES" << endl;
        MostrarVector(precios);

        OrdenarSeleccion(precios);

        cout << endl;
        cout << "PRECIOS ORDENADOS" << endl;
        MostrarVector(precios);

        cout << endl;
        PrecioBarato(precios);
        PrecioCaro(precios);
        CalcularMediana(precios);
    }
    else
    {
        cout << "Cantidad no valida" << endl;
    }

    return 0;
}