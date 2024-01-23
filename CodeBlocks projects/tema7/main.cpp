#include <fstream>

using namespace std;

int main()
{
    ifstream fin("pinochio.in");
    ofstream fout("pinochio.out");

    int n, p, k;
    fin>>n>>p>>k;
    if(k%7 == 0){
        n = n + p * (k / 7) * 5 + (k / 7) * -2;
    }
    else if(k%7 == 6){
        n = n + p * (k / 7) * 5 + (k / 7) * -2 - 1;
    }
    else{
        n = n + p * (k / 7) * 5 + (k / 7) * -2 + p * (k%7);
    }
    fout<<n;

    return 0;
}
