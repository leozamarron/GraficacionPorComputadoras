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

class Obj
{
public:
    Obj(string fname);
private:
    virtual vector<string> split (const string& str, const string& delim);
    vector<string> ver;
    vector<Edge> e;
    vector<unsigned long> ind_v;
    vector<Vertex> vertices;
    vector<Face> faces;
    string fname;
};

class Ply
{
public:
    Ply(string fname);
private:
    vector<string> split (const string& str, const string& delim);
    vector<Edge> e;
    vector<unsigned long> ind_v;
    vector<Vertex> vertices;
    vector<Face> faces;
    string fname;
};

class Object : public Ply, public Obj
{
public:
    Object(string fname);
private:
    string fname;
};

#endif