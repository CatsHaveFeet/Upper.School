#include <iostream>

using namespace std;

int v[1000];

int main()
{
    int n, cntr = 1;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    for(int i = 0; i < n - 1; i++){
        if(v[i] == v[n - 1]){
            cntr++;
        }
    }
    cout<<cntr;

    return 0;
}
