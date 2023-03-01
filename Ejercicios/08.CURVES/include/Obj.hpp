#ifndef OBJ_H
#define OBJ_H

#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Models.hpp"
#include "Vertex.hpp"
#include "Edge.hpp"
#include "Face.hpp"

using namespace std;

class Obj
{
public:
    Obj(string fname);
private: 
    int i;
    Models models;
    vector<string> ver;
    vector<Edge> e;
    vector<unsigned long> ind_v;
    vector<Vertex> vertices;
    vector<Face> faces;
    string fname;
};

#endif