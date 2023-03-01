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
    Vertex(){};
    Vertex(double x, double y, double z);
    Vertex operator+(Vertex op);
    Vertex operator-(Vertex op);
    Vertex operator*(double op);
    double get_y();
    double get_x();   
    double get_z();
    void print();
};

#endif