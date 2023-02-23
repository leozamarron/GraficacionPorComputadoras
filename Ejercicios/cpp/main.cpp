#include "Coche.h"

int main(int argc, char const *argv[])
{
    Coche miCoche;

    cout << "Escribe el nombre de la marca del auto: ";
    cin >> miCoche.marca;

    miCoche.modelo = 2022;
    miCoche.acelerar();

    return 0;
}
