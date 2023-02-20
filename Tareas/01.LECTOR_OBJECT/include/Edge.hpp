#ifndef EDGE_H
#define EDGE_H

#pragma once

#include "Vertex.hpp"

using namespace std;

class Edge
{
private:
    Vertex vi, vf;
public:
    Edge(Vertex vi, Vertex vf);
    void print();
};

#endif