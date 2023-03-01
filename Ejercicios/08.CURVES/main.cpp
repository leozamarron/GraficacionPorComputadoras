// By Leonel Zamarron Rangel
// date: 17/02/2023

#include "Object.hpp"

int main(){
    
    cout << "Cargando..." << endl;

    Object cube_obj("models/cube.obj");
    Object cube_ply("models/cube.ply");

    cout << "Modelo cargado con exito" << endl;

    Vertex p1(0,0,0);
    Vertex p4(15,0,0);
    Vertex r1(3,3,0);
    Vertex r4(-3,3,0);

    cube_ply.hermite(p1, p4, r1, r4, 0.1);
    //cube_obj.hermite(p1, p4, r1, r4, 0.1);
}