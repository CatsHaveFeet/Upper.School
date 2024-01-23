#include <iostream>

using namespace std;
//merge :)
int main()
{
    int n, f = 2;
    cin>>n;
    while(f*f <= n){
        int p = 0;
        while(n % f == 0){
            p++;
            n = n / f;
        }
        if(p > 0){
            cout<<f<<'^'<<p<<' ';
        }
        f++;
    }
    if (n != 1){
        cout<<n<<"^1";
    }
    return 0;
}
