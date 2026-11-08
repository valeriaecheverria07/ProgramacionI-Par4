// PRACTICA 11
// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 7/11/2026
// Número de ejercicio: 1

#include <iostream>
#include <string>

using namespace std;

struct Jugador
{
    string nickname;
    int nivel;
    int experiencia;
};

void mostrarJugador(Jugador jugador)
{
    cout << "Nickname: " << jugador.nickname << endl;
    cout << "Nivel: " << jugador.nivel << endl;
    cout << "Experiencia: " << jugador.experiencia << endl;
}

void sumarExperiencia(Jugador &jugador, int puntos)
{
    jugador.experiencia = jugador.experiencia + puntos;

    if (jugador.experiencia > 100)
    {
        jugador.nivel = jugador.nivel + 1;
        jugador.experiencia = 0;
    }
}

int main()
{
    Jugador jugador;
    int puntos;

    cout << "PERFIL DE VIDEOJUGADOR" << endl;

    cout << "Ingrese el nickname: ";
    cin >> jugador.nickname;

    cout << "Ingrese el nivel: ";
    cin >> jugador.nivel;

    cout << "Ingrese la experiencia actual: ";
    cin >> jugador.experiencia;

    cout << "\nDATOS ANTES DE SUMAR EXPERIENCIA" << endl;
    mostrarJugador(jugador);

    cout << "\nIngrese los puntos de experiencia a sumar: ";
    cin >> puntos;

    sumarExperiencia(jugador, puntos);

    cout << "\nDATOS DESPUES DE SUMAR EXPERIENCIA" << endl;
    mostrarJugador(jugador);

    return 0;
}