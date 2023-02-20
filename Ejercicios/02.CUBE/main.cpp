#include "Vertex.hpp"
#include "Face.hpp"
#include "Edge.hpp"

int main()
{
    Vertex v1(0, 0, 1);    
    Vertex v2(1, 0, 1);    
    Vertex v3(1, 1, 1);    
    Vertex v4(0, 1, 1);    
    Vertex v5(0, 0, 0);    
    Vertex v6(1, 0, 0);    
    Vertex v7(1, 1, 0);    
    Vertex v8(0, 1, 0);

    Edge e1(v1, v2);
    Edge e2(v2, v3);
    Edge e3(v3, v4);
    Edge e4(v4, v1);
    Edge e5(v5, v6);
    Edge e6(v6, v7);
    Edge e7(v7, v8);
    Edge e8(v8, v5);
    Edge e9(v2, v6);
    Edge e10(v3, v7);
    Edge e11(v4, v8);
    Edge e12(v1, v5); 

    Face f1({e1,e2,e3,e4});
    Face f2({e9,e6,e10,e2});
    Face f3({e5,e6,e7,e8});
    Face f4({e12,e8,e11,e4});
    Face f5({e3,e10,e7,e11});
    Face f6({e1,e9,e5,e12});
}