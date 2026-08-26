// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 24/08/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int N;
    int numero;
    int sumaTotal = 0;
    int sumaPares = 0;
    int sumaImpares = 0;
    int sumaPrimos = 0;
    int divisores;

    srand(time(0));

    cout<<"Cuantos numeros desea generar?: ";
    cin>>N;

    for(int i = 1; i <= N; i++)
    {
        numero = (rand() % (100 - 1 + 1)) + 1;

        cout<<"Numero "<<i<<": "<<numero<<endl;

        sumaTotal = sumaTotal + numero;

        if(numero % 2 == 0)
        {
            sumaPares = sumaPares + numero;
        }
        else
        {
            sumaImpares = sumaImpares + numero;
        }

        divisores = 0;

        for(int j = 1; j <= numero; j++)
        {
            if(numero % j == 0)
            {
                divisores = divisores + 1;
            }
        }

        if(divisores == 2)
        {
            sumaPrimos = sumaPrimos + numero;
        }
    }

    cout<<endl;
    cout<<"Suma de todos los numeros: "<<sumaTotal<<endl;
    cout<<"Suma de los numeros pares: "<<sumaPares<<endl;
    cout<<"Suma de los numeros impares: "<<sumaImpares<<endl;
    cout<<"Suma de los numeros primos: "<<sumaPrimos<<endl;

    return 0;
}