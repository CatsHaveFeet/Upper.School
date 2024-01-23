#include <iostream>

using namespace std;

const int LMAX = 1000000;
bool ciur[LMAX + 1];

int main()
{
    int n, i, j;
    cin>>n;
    for(i = 2; i * i <= n; i++){
        if(ciur[i] == 0){
            for(j = i * i; j <= n; j += i){
                ciur[j] = 1;
            }
        }
    }
    for(i = 2; i <= n; i++){
        if(ciur[i] == 0){
            cout<<i<<' ';
        }
    }

    return 0;
}
