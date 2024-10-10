#include "Conjunto.cpp"
#include <iostream>
using namespace std;

int main()
{
    Conjunto conj1, conj2, conj3;
    unsigned short int cantidad, cantidad2;
    typeinfo elDato;

    cout << "Teclea la cantidad de datos que va a tener el conjunto 1: ";
    cin >> cantidad;
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Teclea un valor: ";
        cin >> elDato;
        if (conj1.AddElem(elDato))
            cout << "Dato insertado correctamente en Conjunto 1" << endl;
        else
            cout << "Error al insertar dato en Conjunto 1" << endl;
    }

    conj1.Print();

    cout << "Teclea la cantidad de datos que va a tener el conjunto 2: ";
    cin >> cantidad2;
    for (int i = 0; i < cantidad2; i++)
    {
        cout << "Teclea un valor: ";
        cin >> elDato;
        if (conj2.AddElem(elDato))
            cout << "Dato insertado correctamente en Conjunto 2" << endl;
        else
            cout << "Error al insertar dato en Conjunto 2" << endl;
    }

    conj2.Print();

    // Realiza la unión de los dos conjuntos
    if (conj1.Union(conj2, conj3)) // conj1 pasado por valor, conj2 pasado por referencia
        cout << "Unión realizada con éxito." << endl;
    else
        cout << "Error: No se pudo realizar la unión." << endl;

    conj3.Print(); // Imprime el conjunto resultante de la unión

    return 0;
}
