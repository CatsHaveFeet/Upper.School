#include <fstream>

using namespace std;

int main()
{
    ifstream fin("calcul3.in");
    ofstream fout("calcul3.out");

    int sum = 0, nr;
    char semn;
    fin>>nr;
    sum = nr;
    fout<<nr;
    fin.get(semn);
    fin>>nr;
    while(semn != '='){

        if(semn == '+'){
            sum += nr;
        }
        else{
            sum -= nr;
        }
        fout<<semn<<nr;
        fin.get(semn);
        fin>>nr;
    }
    fout<<semn<<sum;

    return 0;
}
