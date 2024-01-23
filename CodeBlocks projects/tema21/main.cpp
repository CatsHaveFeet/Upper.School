#include <iostream>

using namespace std;

int v[100];

int main()
{
    int n, cntr = 0;
    cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>v[i];
    }
    for(int i = 1; i <= n; i++){
        if(v[i] != 0){
            int j = i + 1;
            while(v[j] != v[i] && j <= n + 1){
                j++;
            }
            if(j <= n){
                v[j] = 0;
                cntr++;
            }
        }
    }
    cout<<cntr;

    return 0;
}
