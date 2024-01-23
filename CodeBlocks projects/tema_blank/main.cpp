#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cin>>n;
    for(int i = n - 1; i > 0; i--){
        for(int j = i - 1; i > 0; j--){
            if(i % j == 0){
                sum += j;
            }
        }
        if(i == sum){
            cout<<i<<' ';
        }
    }

    return 0;
}
