#ifndef COCHE_H
#define COCHE_H

#pragma once

#include <iostream>
using namespace std;

class Coche
{
public:
    Coche();//constructor
    
    string marca;
    int modelo;

    void acelerar();

    ~Coche();
};

#endif