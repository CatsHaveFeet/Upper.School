#include <fstream>

using namespace std;

int main()
{
    ifstream fin("nr_pare_secv.in");
    ofstream fout("nr_pare_secv.out");

    int n, p, i = 0, x;
    bool apare = false;
    fin>>n>>p;
    while(i<n){
        fin>>x;
        if(x == p){
            fout<<i;
            apare = true;
        }
        i++;
    }
    if(apare == false){
        fout<<"Nu apare";
    }

    return 0;
}
