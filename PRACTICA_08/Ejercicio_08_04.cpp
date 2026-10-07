// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 3/10/2026
// Número de ejercicio: 4

#include <iostream>
#include <string>

using namespace std;


string filtrarMensaje(string mensaje, string prohibidas[], int cantidad)
{
    for(int i = 0; i < cantidad; i++)
    {
        int posicion;

        posicion = mensaje.find(prohibidas[i]);

        if(posicion != -1)
        {
            mensaje.replace(posicion, prohibidas[i].length(), "*");
        }
    }

    return mensaje;
}


int main()
{
    string mensaje;

    string prohibidas[3] = {
        "manco",
        "tonto",
        "noob"
    };

    cout << "Ingrese el mensaje: ";
    getline(cin, mensaje);

    mensaje = filtrarMensaje(mensaje, prohibidas, 3);

    cout << "Mensaje filtrado: " << mensaje << endl;

    return 0;
}