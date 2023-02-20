#ifndef OBJ_H
#define OBJ_H

#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Vertex.hpp"
#include "Edge.hpp"
#include "Face.hpp"

using namespace std;

class Ply
{
public:
    Ply(string fname);
private:
    string fname;
    vector<Edge> e;
    vector<unsigned long> ind_v;
    vector<string> split (const string& str, const string& delim);
    vector<Vertex> vertices;
    vector<Face> faces;
};

#endif