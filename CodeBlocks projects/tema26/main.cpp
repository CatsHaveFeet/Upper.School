#include <fstream>

using namespace std;

int pb[2000000], pc[2000000];

int main()
{
    ifstream fin("arme.in");
    ofstream fout("arme.out");

    int n, m, sum = 0;
    fin>>n>>m;
    for(int i = 1; i <= n; i++){
        fin>>pb[i];
    }
    for(int i = 1; i <= m; i++){
        fin>>pc[i];
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(pb[i] < pc[j]){
                int a = pb[i];
                pb[i] = pc[j];
                pc[j] = a;
            }
        }
        sum += pb[i];
    }
    fout<<sum;

    return 0;
}
