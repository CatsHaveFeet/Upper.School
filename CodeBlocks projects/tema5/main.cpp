#include <fstream>

using namespace std;

int main()
{
    ifstream fin("pu.in");
    ofstream fout("pu.out");

    int n, p, sir, i = 0, PosMin = 0, PosMax = 0;
    fin>>n>>p;
    while(i < n){
        fin>>sir;
        if(sir == p){
            if(PosMin != 0){
                PosMax = i;
            }
            else{
                PosMin = i;
            }
        }
        i++;
    }
    if(PosMax == 0){
        fout<<"nu apare de doua ori";
    }
    else{
        fout<<PosMin<<' '<<PosMax;
    }

    return 0;
}
