#include <iostream>

using namespace std;

int f[10];

int main()
{
    int n, x, minap;
    cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>x;
        if(x == 0){
            f[0]++;
        }
        else{
          while(v[i] > 0){
            f[x % 10]++;
            x /= 10;
         }
        }
    }
    while(){
        minap = 9000;
        for(int i = 0; i <= 9; i++){
            if(f[i] > /*idk*/)
        }
    }

    return 0;
}
