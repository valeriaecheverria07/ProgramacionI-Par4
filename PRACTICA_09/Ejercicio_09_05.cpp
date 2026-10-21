// Materia: Programacion I, Paralelo 4
// Autor: Valeria Fernanda Echeverrian Ureña
// Fecha creacion: 07/10/2026
// Numero de ejercicio: 5

#include <iostream>
using namespace std;


void LlenarMatriz(int sala[5][5])
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            sala[i][j] = 0;
        }
    }
}

void MostrarSala(int sala[5][5])
{
    cout << endl;
    cout << "SALA DE CINE VIP" << endl;
    cout << "L = Libre, O = Ocupado" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << "Fila " << i + 1 << ": ";

        for(int j = 0; j < 5; j++)
        {
            if(sala[i][j] == 0)
            {
                cout << "L\t";
            }
            else
            {
                cout << "O\t";
            }
        }

        cout << endl;
    }
}


void ComprarEntrada(int sala[5][5])
{
    int fila, asiento;

    cout << "Ingrese fila (1-5): ";
    cin >> fila;

    cout << "Ingrese asiento (1-5): ";
    cin >> asiento;

    if(fila >= 1 && fila <= 5 &&
       asiento >= 1 && asiento <= 5)
    {
        if(sala[fila - 1][asiento - 1] == 0)
        {
            sala[fila - 1][asiento - 1] = 1;
            cout << "Reserva exitosa" << endl;
        }
        else
        {
            cout << "Asiento no disponible" << endl;
        }
    }
    else
    {
        cout << "Fila o asiento no valido" << endl;
    }
}


void Estadisticas(int sala[5][5])
{
    int libres = 0;
    int ocupados = 0;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(sala[i][j] == 0)
            {
                libres++;
            }
            else
            {
                ocupados++;
            }
        }
    }

    float porcentajeLibres = (float)libres * 100 / 25;
    float porcentajeOcupados = (float)ocupados * 100 / 25;

    cout << endl;
    cout << "ESTADISTICAS" << endl;
    cout << "Asientos libres: " << libres << endl;
    cout << "Asientos ocupados: " << ocupados << endl;
    cout << "Porcentaje libres: " << porcentajeLibres << "%" << endl;
    cout << "Porcentaje ocupados: " << porcentajeOcupados << "%" << endl;
}


int main()
{
    int sala[5][5];
    int opcion;

    LlenarMatriz(sala);

    do
    {
        cout << endl;
        cout << "MENU CINE VIP" << endl;
        cout << "1. Mostrar sala" << endl;
        cout << "2. Comprar entrada" << endl;
        cout << "3. Estadisticas" << endl;
        cout << "4. Salir" << endl;

        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion)
        {
            case 1:
                MostrarSala(sala);
                break;

            case 2:
                ComprarEntrada(sala);
                break;

            case 3:
                Estadisticas(sala);
                break;

            case 4:
                cout << "Fin del programa" << endl;
                break;

            default:
                cout << "Opcion no valida" << endl;
        }

    } while(opcion != 4);

    return 0;
}