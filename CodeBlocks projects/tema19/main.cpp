#include <fstream>

using namespace std;

int v[1000];

int main()
{
    ifstream fin("maxim4.in");
    ofstream fout("maxim4.out");

    int n, maxim = 0, nrmax = 1;
    fin>>n;
    for(int i = 0; i < n; i++){
        fin>>v[i];
        if(v[i] > maxim){
            maxim = v[i];
            nrmax = 1;
        }
        else if(v[i] == maxim){
            nrmax++;
        }

    }
    fout<<maxim<<' '<<nrmax;

    return 0;
}
