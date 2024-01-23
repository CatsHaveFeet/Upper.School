#include <fstream>

using namespace std;

int main()
{
    ifstream fin("pozitii.in");
    ofstream fout("pozitii.out");

    int n, x, cntr = 0, i = 0;
    fin>>n;
    while(i < n){
        fin>>x;
        if(x == i){
            cntr++;
        }
        i++;
    }
    fout<<cntr;

    return 0;
}
