#include <iostream>

using namespace std;

const int LMAX = 1000000;
int ciur[LMAX + 1];

int main()
{
    int n, i, j;
    cin>>n;
    for(i = 2; i <= n; i++){
        if(ciur[i] == 0){
            for(j = i * 2; j <= n; j += i){
                ciur[j]++;
            }
        }
    }
    for(i = 2; i <= n; i++){
        cout<<i<<" --> "<<ciur[i]<<endl;
    }

    return 0;
}
