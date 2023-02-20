#include "Vertex.hpp"

Vertex::Vertex(double x, double y, double z)
{
    this->x = x,
    this->y = y;
    this->z = z;
}

void Vertex::print()
{
    cout << "(" << this->x 
        << ", " << this->y 
        << ", " << this->z 
        << ")";
}