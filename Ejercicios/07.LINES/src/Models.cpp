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