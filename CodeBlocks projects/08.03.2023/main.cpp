#include <iostream>

using namespace std;

int v[1000];

int main()
{
    int n;
    cin>>n;
    for(int i; i < n; i++){
        cin>>v[i];
    }
    for(int i = 0; i < n; i++){
        if(v[i] % 2 == 0){
            for(int j = n - 1; j > i; j--){
                v[j + 1] = v[j];
            }
            v[i + 1] = v[i] * 2;
            i++;
            n++;
        }
    }
    for(int i = 0; i < n; i++){
        cout<<v[i]<<' ';
    }

    return 0;
}
