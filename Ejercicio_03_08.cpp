// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 24/08/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int N;
    float precio;
    float utilidad;
    float iva;
    float descuento;
    float precioFinal;
    float totalDia = 0;
    float totalIVA = 0;
    float totalDescuento = 0;
    float mayor = 0;
    float menor = 0;

    srand(time(0));

    system("cls");

    cout<<"Ingrese la cantidad de productos vendidos: ";
    cin>>N;

    for(int i = 1; i <= N; i++)
    {
        precio = (rand() % (10000 - 10 + 1)) + 10;

        utilidad = precio * 0.87;
        iva = precio * 0.13;

        precioFinal = utilidad + iva;

        descuento = 0;

        if(precioFinal > 2500)
        {
            descuento = precioFinal * 0.05;
            precioFinal = precioFinal - descuento;
        }

        totalDia = totalDia + precioFinal;
        totalIVA = totalIVA + iva;
        totalDescuento = totalDescuento + descuento;

        if(i == 1)
        {
            mayor = precioFinal;
            menor = precioFinal;
        }

        if(precioFinal > mayor)
        {
            mayor = precioFinal;
        }

        if(precioFinal < menor)
        {
            menor = precioFinal;
        }

        cout<<"Producto "<<i<<": "<<precioFinal<<" Bs"<<endl;
    }

    cout<<endl;
    cout<<"Total ingresado en el dia: "<<totalDia<<" Bs"<<endl;
    cout<<"Total IVA: "<<totalIVA<<" Bs"<<endl;
    cout<<"Total descuentos: "<<totalDescuento<<" Bs"<<endl;
    cout<<"Producto mas caro: "<<mayor<<" Bs"<<endl;
    cout<<"Producto mas barato: "<<menor<<" Bs"<<endl;

    return 0;
}