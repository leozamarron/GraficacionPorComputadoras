#ifndef VERTEX_H
#define VERTEX_H

#pragma once

#include <iostream>
using namespace std;

class Vertex
{
private:
    double x, y, z;
public:
    Vertex() {};
    Vertex(double x, double y, double z);
    void print();
};

#endif