#include <iostream>

using namespace std;

int i,j,mini,imin,v[1001],n;
int main()
{
    cin>>n;
    for (i=1; i<=n; i++) {
        cin>>v[i];
    }
    for (i=1; i<n; i++) {
        if(v[i] % 2 == 0){
            mini=v[i];
            imin=i;
            for (j=i+1; j<=n; j++) {
                if (mini < v[j] && v[j] % 2 == 0) {
                    mini = v[j];
                    imin = j;
                }
            }
            v[imin] = v[i];
            v[i] = mini;
        }
    }
    for (i=1; i<=n; i++) {
        cout<<v[i]<<' ';
    }

    return 0;
}
