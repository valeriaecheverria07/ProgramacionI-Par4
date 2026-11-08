// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 06/11/2026
// Número de ejercicio: 4

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void realizarVotacion(vector<string> partidos, vector<int>& votos, int n)
{
    int opcion;

    for (int i = 0; i < n; i++)
    {
        cout << "\nELECTOR " << i + 1 << endl;

        cout << "1. PDC" << endl;
        cout << "2. LIBRE" << endl;
        cout << "3. MAS" << endl;
        cout << "4. UN" << endl;

        cout << "Seleccione su partido: ";
        cin >> opcion;

        while (opcion < 1 || opcion > 4)
        {
            cout << "Opcion incorrecta. Ingrese nuevamente: ";
            cin >> opcion;
        }

        votos[opcion - 1]++;
    }
}

void mostrarVeredicto(vector<string> partidos, vector<int> votos)
{
    int mayor = votos[0];
    int ganadores = 0;

    for (int i = 1; i < 4; i++)
    {
        if (votos[i] > mayor)
        {
            mayor = votos[i];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (votos[i] == mayor)
        {
            ganadores++;
        }
    }

    cout << "\n========== RESULTADOS ==========" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << partidos[i] << ": " << votos[i] << " votos" << endl;
    }

    cout << "\n========== VEREDICTO ==========" << endl;

    if (ganadores == 1)
    {
        for (int i = 0; i < 4; i++)
        {
            if (votos[i] == mayor)
            {
                cout << "El partido ganador es: " << partidos[i] << endl;
                cout << "Cantidad de votos: " << mayor << endl;
            }
        }
    }
    else
    {
        cout << "Existe un empate entre los siguientes partidos:" << endl;

        for (int i = 0; i < 4; i++)
        {
            if (votos[i] == mayor)
            {
                cout << partidos[i] << endl;
            }
        }

        cout << "Cantidad de votos: " << mayor << endl;
    }
}

int main()
{
    vector<string> partidos = {"PDC", "LIBRE", "MAS", "UN"};

    vector<int> votos(4, 0);

    int n;

    cout << "CONTADOR DE VOTOS" << endl;

    cout << "Ingrese la cantidad de electores: ";
    cin >> n;

    while (n <= 0)
    {
        cout << "Ingrese una cantidad mayor a cero: ";
        cin >> n;
    }

    realizarVotacion(partidos, votos, n);

    mostrarVeredicto(partidos, votos);

    return 0;
}