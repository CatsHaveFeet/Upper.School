/*///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int v[1001];

int main()
{
    int n, imin = 0, imax = 0, nrmax = 0, nrmin = 1000000;
    cin>>n;
    for(int i = 1; i < n; i++){
        cin>>v[i];
        if(v[i] > nrmax){
            nrmax = v[i];
            imax = i;
        }
        else if(v[i] < nrmin){
            nrmin = v[i];
            imin = i;
        }
    }
    cout<<imin <<' '<<imax;

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/
/*///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//formula importanta !!!!! 100-(double)pf[i]*100/pi[i]


#include <iostream>

using namespace std;

int pi[11], pf[11];

int main(){
    int n, poz, i;
    double discountmax = 0;
    cin>>n;
    for(i = 1; i <= n; i++){
        cin>>pi[i];
    }
    for(i = 1; i <= n; i++){
        cin>>pf[i];
    }
    for(i = 1; i <= n; i++){
        if(100-(double)pf[i]*100/pi[i] > discountmax){
            discountmax = 100-(double)pf[i]*100/pi[i];
            poz = i;
        }
    }
    cout<<poz;

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int v[];

int main(){
    int n;

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
