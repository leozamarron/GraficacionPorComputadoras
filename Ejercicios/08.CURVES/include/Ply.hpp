#ifndef PLY_H
#define PLY_H

#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <fstream>
#include "Models.hpp"
#include "Vertex.hpp"
#include "Edge.hpp"
#include "Face.hpp"

using namespace std;

class Ply
{
public:
    Ply(string fname);
private:
    int i;
    Models models;
    vector<Edge> e;
    vector<unsigned long> ind_v;
    vector<Vertex> vertices;
    vector<Face> faces;
    string fname;
};

#endif