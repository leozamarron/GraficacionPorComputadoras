#include "Object.hpp"

Obj::Obj(string fname)
{
    this->fname = fname;
    this->vertices = {};
    this->faces = {};

    int i;

    // Leer un archivo OBJ
    string line;

    ifstream archivoOBJ(this->fname);
    while (getline(archivoOBJ, line))
    {
        vector<string> elems = split(line, " ");
        if (!elems.empty())
        {
            if (elems[0] == "v")
            {
                //Crear un objeto en vertex
                double x = stod(elems[1]);
                double y = stod(elems[2]);
                double z = stod(elems[3]);
                Vertex v(x,y,z);
                this->vertices.push_back(v);
            }
            if (elems[0] == "f")
            {
                i = 0;
                this->ver = {};
                this->ind_v = {};

                do
                {
                    this->ver.push_back(split(elems[i+1], "/")[0]);
                    this->ind_v.push_back(stol(ver[i]) - 1);
                } while (elems.size()>2+i++);

                i = 0;
                this->e = {};

                do
                {
                    if(ind_v.size()>1+i)
                    {
                        Edge e1(vertices[ind_v[i]],vertices[ind_v[i+1]]);
                        this->e.push_back(e1);
                    }else{
                        Edge e1(vertices[ind_v[i]],vertices[ind_v[0]]);
                        this->e.push_back(e1);
                    }
                } while (ind_v.size()>1+i++);

                Face f(e);
                this->faces.push_back(f);

                // string v3 = split(elems[3], "/")[0];
                // unsigned long ind_v3 = stol(v3) - 1;
                // Edge e2(vertices[ind_v2],vertices[ind_v3]);
            }
        }
    }
    archivoOBJ.close();
}

vector<string> Obj::split (const string& str, const string& delim) 
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