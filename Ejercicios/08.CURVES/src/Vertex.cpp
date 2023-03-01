#include "Vertex.hpp"

Vertex::Vertex(double x, double y, double z)
{
    this->x = x,
    this->y = y;
    this->z = z;
}

double Vertex::get_x()
{
    return this->x;
}   
double Vertex::get_y()
{
    return this->y;
}
double Vertex::get_z()
{
    return this->z;
}

Vertex Vertex::operator+(Vertex op)
{
    return Vertex(this->x+op.x,this->y+op.y, this->z+op.z);
}

Vertex Vertex::operator-(Vertex op)
{
    return Vertex(this->x-op.x,this->y-op.y, this->z-op.z);
}

Vertex Vertex::operator*(double op)
{
    return Vertex(this->x*op,this->y*op, this->z*op);
}

void Vertex::print()
{
    cout << "(" << this->x 
        << ", " << this->y 
        << ", " << this->z 
        << ")";
}