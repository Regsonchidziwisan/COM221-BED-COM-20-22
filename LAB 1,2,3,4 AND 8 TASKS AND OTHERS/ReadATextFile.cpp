#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string line;
    ofstream myfile("Regson.txt");
    if(myfile.is_open())
    {
        while(getline(myfile,line))
        {
            cout << line << '\n';
        }
        myfile.close();
    }
    else
    {
        cout << "unable to open file";
    }
    return 0;
}