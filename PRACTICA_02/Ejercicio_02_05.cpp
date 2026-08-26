// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 25/08/2026
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numero, factorial = 1;

    cout<<"Digite un numero: ";
    cin>>numero;

    for(int i=1;i<=numero;i++){
        factorial *= i;
    }

    cout<<"\nEl factorial del numero es: "<<factorial<<endl;

    system("pause");
    return 0;
}