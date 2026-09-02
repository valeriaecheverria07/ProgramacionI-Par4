// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 28/08/2026

#include <iostream>

using namespace std;


float calcularPromedio(float n1, float n2, float n3)
{
    float promedio;

    promedio = (n1 + n2 + n3) / 3;

    return promedio;
}


float calcularNotaFinal(float promedio, float examen)
{
    float nota;

    nota = (promedio * 0.5) + (examen * 0.5);

    return nota;
}


bool aprobo(float n1, float n2, float n3, float examen, float notaFinal)
{
    if(n1 >= 60)
    {
        if(n2 >= 60)
        {
            if(n3 >= 60)
            {
                if(examen >= 60)
                {
                    if(notaFinal >= 51)
                    {
                        return true;
                    }
                }
            }
        }
    }

    return false;
}


int main()
{
    float parcial1, parcial2, parcial3;
    float examen;
    float promedio;
    float notaFinal;

    system("cls");

    cout<<"Ingrese nota parcial 1: ";
    cin>>parcial1;

    cout<<"Ingrese nota parcial 2: ";
    cin>>parcial2;

    cout<<"Ingrese nota parcial 3: ";
    cin>>parcial3;

    cout<<"Ingrese nota examen final: ";
    cin>>examen;


    promedio = calcularPromedio(parcial1, parcial2, parcial3);

    notaFinal = calcularNotaFinal(promedio, examen);


    cout<<endl;
    cout<<"Promedio parciales: "<<promedio<<endl;
    cout<<"Nota final: "<<notaFinal<<endl;


    if(aprobo(parcial1, parcial2, parcial3, examen, notaFinal))
    {
        cout<<"El estudiante aprobo"<<endl;
    }
    else
    {
        cout<<"El estudiante reprobo"<<endl;
    }


    return 0;
}