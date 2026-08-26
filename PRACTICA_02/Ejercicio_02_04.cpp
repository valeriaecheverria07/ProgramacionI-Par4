// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 25/08/2026
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int n, suma = 0;

    cout<<"Digite el numero de elementos: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        suma += i;
    }

    cout<<"\nLa suma es: "<<suma<<endl;

    getch();
    return 0;
}