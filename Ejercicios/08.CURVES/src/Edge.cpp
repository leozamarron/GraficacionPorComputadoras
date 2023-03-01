#include "Edge.hpp"

Edge::Edge(Vertex vi, Vertex vf)
{
    this->vi = vi;
    this->vf = vf;
}

void Edge::print()
{
    this->vi.print();
    cout << " - ";
    this->vf.print();
}