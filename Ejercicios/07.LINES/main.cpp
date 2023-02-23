// By Leonel Zamarron Rangel
// date: 17/02/2023

#include "Object.hpp"

int main(){
    cout << "Cargando..." << endl;

    Object cube_obj("models/cube.obj");
    Object cube_ply("models/cube.ply");

    cout << "Modelo cargado con exito" << endl;

    Vertex vi(3,-1,-9);
    Vertex vf(11,5,2);

    cube_ply.line(vi,vf,0.2);
    cube_obj.line(vi,vf,0.1);
}