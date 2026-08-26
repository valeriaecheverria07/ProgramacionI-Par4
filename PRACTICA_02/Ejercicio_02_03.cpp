// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 25/08/2026
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numero, suma = 0;

    do{
        cout<<"Digite un numero: ";
        cin>>numero;

        if(numero>0){
            suma += numero;
        }

    }while(((numero<20) || (numero>30)) && (numero != 0));

    cout<<"\nLa suma es: "<<suma<<endl;

    system("pause");
    return 0;
}