#include <iostream>

using namespace std;

int v[14];

int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<v[j]<<' ';
        }
        cout<<endl;
        int a = v[0];
        for(int h = 0; h < n - 1; h++){
            v[h] = v[h + 1];
        }
        v[n - 1] = a;
    }
    return 0;
}
