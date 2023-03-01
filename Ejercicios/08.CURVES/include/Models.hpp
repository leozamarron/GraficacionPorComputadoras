#ifndef MODELS_H
#define MODELS_H

#pragma once

#include <iostream>
#include <vector>
#include "Vertex.hpp"
#include <armadillo>

class Models
{
public:
    Models(){};

    vector<string> split(const string& str, const string& delim);
    void line(Vertex vi, Vertex vf, double dt);
    void hermite(Vertex p1, Vertex p4, Vertex r1, Vertex r4, double dt);
};

#endif