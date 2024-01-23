#include <iostream>

using namespace std;

int v[100];

int main()
{
    int n, prevnr = -10000;
    bool cresc = true;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>v[i];
        if(v[i] % 2 == 0){
            if(v[i] < prevnr){
                cresc = false;
            }
            prevnr = v[i];
        }
    }
    if(cresc == true){
        cout<<"DA";
    }
    else{
        cout<<"NU";
    }

    return 0;
}
