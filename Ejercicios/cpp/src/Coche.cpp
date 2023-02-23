#include "Coche.h"

Coche::Coche()
{
    marca = "Sin marca";
    modelo = 0;
    cout << "Se ha creado un nuevo coche" << endl;
}

void Coche::acelerar()
{
    cout << "El coche" << marca << "modelo" << "acelera" << endl;
}

Coche::~Coche()
{
    cout << "Se ha destruido el coche" << endl;
}