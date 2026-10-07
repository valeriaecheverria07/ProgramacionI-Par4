// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 3/10/2026
// Número de ejercicio: 5

#include <iostream>
#include <string>

using namespace std;


void separarURL(string url)
{
    int posicionProtocolo;
    int posicionRuta;

    string protocolo;
    string dominio;
    string ruta;


    posicionProtocolo = url.find("://");

    protocolo = url.substr(0, posicionProtocolo);


    posicionRuta = url.find("/", posicionProtocolo + 3);


    dominio = url.substr(posicionProtocolo + 3,
                         posicionRuta - (posicionProtocolo + 3));


    ruta = url.substr(posicionRuta);


    cout << "Protocolo: " << protocolo << endl;
    cout << "Dominio: " << dominio << endl;
    cout << "Ruta: " << ruta << endl;
}


int main()
{
    string url;

    cout << "Ingrese una URL: ";
    getline(cin, url);

    separarURL(url);

    return 0;
}