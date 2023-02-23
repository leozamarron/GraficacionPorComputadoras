#include "Object.hpp"

Ply::Ply(string fname)
{
    this->fname = fname;
    this->vertices = {};
    this->faces = {};

    int i = 0, j;
    int nv;
    int nf;

    // Leer un archivo Ply
    string line;

    ifstream archivoPLY(this->fname);
    while (getline(archivoPLY, line))
    {
        vector<string> elems = split(line, " ");
        if (!elems.empty())
        {
            if (elems[0] == "element")
            {
                if(elems[1] == "vertex")
                {
                    nv = stoi(elems[2]);
                    
                }
                else
                    nf = stoi(elems[2]);
            }
            else if(isdigit(elems[0][0])){

                if(i < nv){
                    double x = stod(elems[0]);
                    double y = stod(elems[1]);
                    double z = stod(elems[2]);
                    Vertex v(x,y,z);
                    this->vertices.push_back(v);
                    i++;
                }

                else if(i < nf+nv){
                    int j;
                    int n = stoi(elems[0]);
                    this->ind_v = {};

                    for (j = 0; j < n; j++)
                        this->ind_v.push_back(stoi(elems[j+1]));
                    this->e = {};

                    for (j = 0; j < n; j++)
                        if(n>1+j)
                        {
                            Edge e1(vertices[ind_v[j]],vertices[ind_v[j+1]]);
                            this->e.push_back(e1);
                        }else{
                            Edge e1(vertices[ind_v[j]],vertices[ind_v[0]]);
                            this->e.push_back(e1);
                        }
                    Face f(e);
                    this->faces.push_back(f);
                    i++;
                }
            }
        }
    }
    archivoPLY.close();
}

vector<string> Ply::split (const string& str, const string& delim) 
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