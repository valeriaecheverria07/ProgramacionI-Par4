// PRACTICA 11
// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 07/11/2026
// Número de ejercicio: 4

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct Paquete
{
    string codigoRastreo;
    char direccion[50];
    double pesoKg;
    char estado[20];
};

void entregarPaquete(Paquete &paquete)
{
    strcpy(paquete.estado, "Entregado");

    cout << "\n========== RECIBO DE ENTREGA ==========" << endl;

    cout << "Codigo de rastreo: " << paquete.codigoRastreo << endl;
    cout << "Direccion: " << paquete.direccion << endl;
    cout << "Peso: " << paquete.pesoKg << " Kg" << endl;
    cout << "Estado: " << paquete.estado << endl;

    cout << "=======================================" << endl;
}

int main()
{
    Paquete paquete;

    cout << "SISTEMA DE LOGISTICA DE ENVIOS" << endl;

    cout << "\nIngrese el codigo de rastreo: ";
    cin >> paquete.codigoRastreo;

    cout << "Ingrese la direccion: ";
    cin.ignore();
    cin.getline(paquete.direccion, 50);

    cout << "Ingrese el peso del paquete en Kg: ";
    cin >> paquete.pesoKg;
    strcpy(paquete.estado, "En Tránsito");

    cout << "\nEstado inicial: " << paquete.estado << endl;

    entregarPaquete(paquete);

    cout << "\nTamano de la estructura Paquete: "
         << sizeof(Paquete) << " bytes" << endl;

    return 0;
}