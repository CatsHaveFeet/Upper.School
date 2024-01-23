#include <fstream>

using namespace std;

int main()
{
    ifstream fin("nr.in");
    ofstream fout("nr.out");

    int n, i = 0, cntr = 1;
    float x, notamax = 0;
    fin>>n;
    while(i<n){
        fin>>x;
        if(x>notamax){
            notamax = x;
            cntr = 1;
        }
        else if(x == notamax){
            cntr++;
        }
        i++;
    }
    fout<<notamax<<' '<<cntr;

    return 0;
}
