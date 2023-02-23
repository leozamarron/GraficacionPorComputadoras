#include "Face.hpp"

Face::Face(vector<Edge> edges)
{
    this->edges = edges;
}

void Face::print()
{
    cout << "(";
    for (Edge e: this->edges)
    {
        e.print();
        cout << ", ";
    }
    
    cout << ")";
}