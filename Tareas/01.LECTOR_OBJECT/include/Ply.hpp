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
#include "Object.hpp"

using namespace std;

class Ply
{
public:
    Ply(string fname);
};

#endif