#ifndef MODELS_H
#define MODELS_H

#pragma once

#include <iostream>
#include <vector>
#include "Vertex.hpp"

class Models
{
protected:
    Models(){};

    vector<string> split(const string& str, const string& delim);
    void line(Vertex vi, Vertex vf, double dt);
};

#endif