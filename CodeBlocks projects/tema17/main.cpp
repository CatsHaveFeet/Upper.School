#include <iostream>

using namespace std;

int v[1000];

int main()
{
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>v[i];
    }
    for(int i = 1; i != n + 1; i++){
        if(i == n){
            cout<<v[i];
        }
        else{
            cout<<v[i]<<' '<<v[n]<<' ';
            n--;
        }
    }

    return 0;
}
