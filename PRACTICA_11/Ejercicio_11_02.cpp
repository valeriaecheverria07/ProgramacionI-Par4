// PRACTICA 11
// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 07/11/2026
// Número de ejercicio: 2

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Cuenta
{
    string titular;
    int numeroCuenta;
    double saldo;
};

void depositar(Cuenta &cuenta, double cantidad)
{
    if (cantidad > 0)
    {
        cuenta.saldo = cuenta.saldo + cantidad;

        cout << "Deposito realizado correctamente." << endl;
    }
    else
    {
        cout << "Cantidad de deposito no valida." << endl;
    }
}

void retirar(Cuenta &cuenta, double cantidad)
{
    if (cantidad > 0)
    {
        if (cantidad <= cuenta.saldo)
        {
            cuenta.saldo = cuenta.saldo - cantidad;

            cout << "Retiro realizado correctamente." << endl;
        }
        else
        {
            cout << "Saldo insuficiente para realizar el retiro." << endl;
        }
    }
    else
    {
        cout << "Cantidad de retiro no valida." << endl;
    }
}

int main()
{
    Cuenta cuenta;
    double deposito, retiro;

    cout << "SISTEMA DE CUENTA BANCARIA" << endl;

    cout << "\nIngrese el nombre del titular: ";
    getline(cin, cuenta.titular);

    cout << "Ingrese el numero de cuenta: ";
    cin >> cuenta.numeroCuenta;

    cout << "Ingrese el saldo inicial: ";
    cin >> cuenta.saldo;

    cout << "\nIngrese la cantidad a depositar: ";
    cin >> deposito;

    depositar(cuenta, deposito);

    cout << "\nIngrese la cantidad a retirar: ";
    cin >> retiro;

    retirar(cuenta, retiro);

    cout << "\nDATOS FINALES DE LA CUENTA" << endl;

    cout << "Titular: " << cuenta.titular << endl;
    cout << "Numero de cuenta: " << cuenta.numeroCuenta << endl;

    cout << fixed << setprecision(2);
    cout << "Saldo final: $" << cuenta.saldo << endl;

    return 0;
}