#include <fstream>

using namespace std;

int main()
{
    ifstream fin("fisier.in");
    ofstream fout("fisier.out");

    int n;
    char c;
    fin>>n;
    fin.get(c);
   while(c != '\n'){
        fin.get(c);

    }

    return 0;
}
