#include <iostream>

using namespace std;

int v[100];

int main()
{
    int n;
    bool multiplu = true;
    cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>v[i];
    }
    for(int i = n - 1; i > 0; i--){
        if(v[i] % v[n] != 0){
            multiplu = false;
            break;
        }
    }
    if(multiplu == true){
        cout<<"DA";
    }
    else{
        cout<<"NU";
    }

    return 0;
}
