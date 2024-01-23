#include <fstream>

using namespace std;

int main()
{
    ifstream fin("plusminus.in");
    ofstream fout("plusminus.out");

    int nr, suma = 0;
    char semn, check;
    fin>>nr;
    suma += nr;
    fin.get();
    fin.get(semn);
    fin>>nr;
    while(true){
        if(semn == '+'){
            suma += nr;
        }
        else{
            suma -= nr;
        }
        fin.get(check);
        if(check == '\n'){
            break;
        }
        fin.get(semn);
        fin>>nr;
    }
    fout<<suma;

    return 0;
}
