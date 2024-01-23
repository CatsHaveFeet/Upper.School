#include <fstream>

using namespace std;

int main()
{
    ifstream fin("cezark.in");
    ofstream fout("cezark.out");

    int k;
    char txt;
    fin>>k;
    fin.get();
    fin.get(txt);
    while(txt != '\n'){
        txt = 'a' + (txt + k - 'a')%26;
        fout<<txt;
        fin.get(txt);
    }

    return 0;
}
