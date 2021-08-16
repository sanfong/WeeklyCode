#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream MyFile("data.txt");
    string s = "";
    while (s != ".")
    {
        cin >> s;
        MyFile << s << endl;
    }
    MyFile.close();
    return 0;
}