#include <iostream>
using namespace std;

int main()
{
    int n, x, x_max = 0, x_min = 0, cmin, cmax, rest;
    for(i = 0; i < n; i++){
        if(x > x_max){
            x_max = x;
        }
        else if(x < x_min){
            x_min = x;
        }
    }
    cmax = x_max;
    cmin = x_min;
    while(cmin != 0){
        rest = cmax % cmin;
        cmax = cmin;
        cmin = rest;
    }

    return 0;
}
