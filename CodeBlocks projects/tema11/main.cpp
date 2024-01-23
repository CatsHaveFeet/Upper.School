#include <fstream>

using namespace std;

int main()
{
    ifstream fin("comune.in");
    ofstream fout("comune.out");

    int m, n, cntr = 0, a;
    fin>>m>>n;
    a = m;
    while(true){
        if(a % 10 == n % 10){//Imi trebuie cumva sa il opresc din a numara cifre care se repeta dar nu imi vine nicio idee :(
                cntr++;
            }
        a = a / 10;
        if(n == 0){
            break;
        }
        else if(a == 0){
            a = m;
            n = n / 10;
        }
    }
    fout<<cntr;

    return 0;
}
