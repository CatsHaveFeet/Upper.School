#include <fstream>

using namespace std;

int v[200];

int main()
{
    ifstream fin("nrlipsa2.in");
    ofstream fout("nrlipsa2.out");

    int x;
    while(fin>>x){
        if(x <= 100 && x >= -100){
            v[x + 100]++;
        }
    }
    for(int i = 0; i <= 200; i++){
        if(v[i] == 0){
            fout<<i - 100;
            break;
        }
    }


    return 0;
}
