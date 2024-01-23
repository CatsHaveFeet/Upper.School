#include <iostream>

using namespace std;

int c[100];

int main()
{
    ifstream fin("fmi_orase2.in");
    ofstream fout("fmi_orese2.out");

    int m, h = 1, current_max = 1, sum;
    fin>>m;
    for(int i = 1; i <= m; i++){
        fin>>c[i];
    }
    for(int i = 1; i <= m; i++){

    }

    return 0;
}
