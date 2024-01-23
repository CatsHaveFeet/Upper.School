#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, p = 0, s = 0;
    cin>>n;
    while(p < n){
        if(s == n){
            p++;
            s = p;
        }
        else{
            s++;
        }
        sum += p + s;
    }
    cout<<sum;

    return 0;
}
