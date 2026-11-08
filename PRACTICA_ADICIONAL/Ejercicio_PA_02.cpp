// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 06/11/2026
// Número de ejercicio: 2

#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

vector<string> generarUsuarios(vector<string> nombres, vector<string> apellidos)
{
    vector<string> usuarios;

    for (int i = 0; i < 5; i++)
    {
        string usuario = "";

        usuario += tolower(nombres[i][0]);

        for (int j = 0; j < apellidos[i].size(); j++)
        {
            usuario += tolower(apellidos[i][j]);
        }

        usuarios.push_back(usuario);
    }

    return usuarios;
}

int main()
{
    vector<string> nombres = {"Willy", "Maria", "Carlos", "Andrea", "Daniel"};

    vector<string> apellidos = {"Tenorio", "Lopez", "Perez", "Flores", "Rojas"};

    vector<string> usuarios = generarUsuarios(nombres, apellidos);

    cout << "GENERADOR DE NOMBRES DE USUARIO" << endl;
    cout << "--------------------------------" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Nombre: " << nombres[i] << endl;
        cout << "Apellido: " << apellidos[i] << endl;
        cout << "Usuario: " << usuarios[i] << endl;
        cout << "--------------------------------" << endl;
    }

    return 0;
}