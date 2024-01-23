/*//////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int v[10];

int main()
{
    int n;
    bool first = true;
    cin>>n;
    while(n != 0){
        v[n % 10]++;
        n /= 10;
    }
    for(int i = 0; i <= 9; i++){
        if(first == true && v[0] != 0){
            i = 1;
            while(v[i] == 0){
                i++;
            }
            cout<<i;
            v[i]--;
            i = -1;
            first = false;
        }
        else{
            while(v[i] != 0){
                cout<<i;
                v[i]--;
            }
        }
    }

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////*/
#include <iostream>

using namespace std;

int v[100];

int main()
{
    long long n;
    int x;
    cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>x;
        v[x]++;
    }
    for(int i = 1; i <= 99; i++){
        while(v[i] != 0){
            cout<<i<<' ';
            v[i]--;
        }
    }

    return 0;
}
