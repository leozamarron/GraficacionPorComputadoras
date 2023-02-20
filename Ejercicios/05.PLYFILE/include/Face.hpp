#ifndef FACE_H
#define FACE_H

#pragma once

#include <iostream>
#include <vector>
#include "Edge.hpp"
#include "Vertex.hpp"
#include "Edge.hpp"
#include "Face.hpp"

using namespace std;

class Face
{
private:
    vector<Edge> edges;
public:
    Face(vector<Edge> edges);
    void print();
};

#endif