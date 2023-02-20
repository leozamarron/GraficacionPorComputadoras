#include "Vertex.hpp"
#include "Face.hpp"
#include "Edge.hpp"

int main()
{
    Vertex v1(0, 0, 1);    
    Vertex v2(1, 0, 1);    
    Vertex v3(1, 0, 0);    
    Vertex v4(0, 0, 0);    
    Vertex v5(0.5, 1, 0.5);

    Edge e1(v1, v2);
    Edge e2(v2, v3);
    Edge e3(v3, v4);
    Edge e4(v4, v1);
    Edge e5(v2, v5);
    Edge e6(v3, v5);
    Edge e7(v4, v5);
    Edge e8(v1, v5);

    Face f1({e1,e5,e8});
    Face f2({e2,e6,e5});
    Face f3({e3,e6,e7});
    Face f4({e4,e8,e7});
    Face f5({e1,e2,e3,e4});
}