#include <iostream>

using namespace std;

int main()
{
    int n, x, i = 0, nr;
    bool ok = true;
    cin>>n;
    while(i<n){
        cin>>x;
        if(i == 0){
            nr = x;
        }
        else{
            if(x == nr+1){
                nr = x;
            }
            else{
                ok = false;
            }
        }
        i++;
    }
    if(ok == true){
        cout<<"da";
    }
    else{
        cout<<"nu";
    }

    return 0;
}
