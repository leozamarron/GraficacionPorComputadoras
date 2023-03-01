#ifndef OBJECT_H
#define OBJECT_H

#pragma once

#include "Models.hpp"
#include "Ply.hpp"
#include "Obj.hpp"

using namespace std;

class Object : public Ply, public Obj, public Models
{
public:
    Object(string fname);
private:
    string fname;
};

#endif