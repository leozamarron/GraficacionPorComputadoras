#include "Models.hpp"

vector<string> Models::split (const string& str, const string& delim) 
{
    vector<string> tokens;
    size_t prev = 0, pos = 0;

    do
    {
        pos = str.find(delim, prev);
        if(pos == string::npos) pos = str.length();
        string token = str.substr(prev, pos-prev);
        if(!token.empty()) tokens.push_back(token);
        prev = pos + delim.length();
    } while (pos < str.length() && prev < str.length());
    
    return tokens;
}

void Models::line(Vertex vi, Vertex vf, double dt)
{
    for (double t = 0.0; t <= 1.0; t+=dt)
    {
        Vertex v = vi + ((vf - vi)*t);

        cout << "t=" << t << " ";
        v.print();
        cout << endl;
    }
}

void Models::hermite(Vertex p1, Vertex p4, Vertex r1, Vertex r4, double dt)
{
    arma::Mat<double> MH = { {2, -2,  1,  1},
                             {-3, 3, -2, -1},
                             {0,  0,  1,  0},
                             {1,  0,  0,  0} };

    arma::Mat<double> GHx = { {p1.get_x(), p1.get_y(),p1.get_z()},
                              {p4.get_x(), p4.get_y(),p4.get_z()},
                              {r1.get_x(), r1.get_y(),r1.get_z()},
                              {r4.get_x(), r4.get_y(),r4.get_z()} };
    

    for (double t = 0.0; t <= 1.0; t+=dt)
    {
        arma::Row<double> T = {pow(t,3), pow(t,2), t, 1};

        arma::Mat<double> Qt = T * MH * GHx;

        Vertex v(Qt(0,0), Qt(0,1), Qt(0,2));

        cout << "t=" << t << " ";
        v.print();
        cout << endl;
    }
}