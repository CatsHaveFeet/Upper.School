#include <iostream>

using namespace std;

int v[100];

int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    for(int i = 0; i < n; i++){
        cout<<v[i]<<endl;
    }

    return 0;
}
