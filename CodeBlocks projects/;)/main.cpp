#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("yes.in");
    ofstream fout("no.out");

    int n;

    fin>>n;

    fout<<"dublul lui n este = "<<2*n;

    fin.close();
    fout.close();

    return 0;
}
