#include <iostream>
#include <vector>
#include <string>

using namespace std;

class messenger
{
private:
    vector<string> message;
public:
    messenger(vector<string> msg);
    ~messenger();
    void print();
}; 

messenger::messenger(vector<string> msg)
{
    this->message = msg; //message = txt
}

messenger::~messenger()
{
}

void messenger::print()
{
    for (string& word : this->message)
    {
        cout << word << " ";
    }
    cout << endl;
}


int main()
{

    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
    messenger mensaje(msg);
    mensaje.print();
}