// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 06/11/2026
// Número de ejercicio: 5

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void cifrarMensaje(vector<string>& mensaje)
{
    for (int i = 0; i < mensaje.size(); i++)
    {
        int longitud = mensaje[i].size();

        for (int j = 0; j < longitud / 2; j++)
        {
            char auxiliar;

            auxiliar = mensaje[i][j];

            mensaje[i][j] = mensaje[i][longitud - 1 - j];

            mensaje[i][longitud - 1 - j] = auxiliar;
        }
    }
}

int main()
{
    vector<string> mensaje = {
        "Hola", "mundo", "este", "es", "un", "mensaje"
    };

    cout << "MENSAJE ORIGINAL:" << endl;

    for (int i = 0; i < mensaje.size(); i++)
    {
        cout << mensaje[i] << " ";
    }

    cifrarMensaje(mensaje);

    cout << "\n\nMENSAJE CIFRADO:" << endl;

    for (int i = 0; i < mensaje.size(); i++)
    {
        cout << mensaje[i] << " ";
    }

    cout << endl;

    return 0;
}