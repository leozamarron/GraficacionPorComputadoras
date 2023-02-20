#include "Object.hpp"

Object::Object(string fname) : Ply(fname), Obj(fname)
{
    this->fname = fname;

    string line;
    ifstream archivo(this->fname);
    if(getline(archivo, line)){
        if(line=="ply")
            Ply cubePly(this->fname);
        else
            Obj cubeObj(this->fname);
    }
}