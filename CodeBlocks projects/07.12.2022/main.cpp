#include <iostream>

using namespace std;

int main()
{
    int n, p, c, ltemp = 1, lmax = 1;
    cin>>n>>p;
    for(int i = 1; i < n; i++){
        cin>>c;
        if(c >= p){
            ltemp++;
        }
        else{
            ltemp = 1;
        }
        if(ltemp > lmax){
            lmax = ltemp;
        }
        p = c;
    }
    cout<<lmax;

    return 0;
}
