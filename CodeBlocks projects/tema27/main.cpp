#include <iostream>
using namespace std;
int n,v[1001],i,poz=1;
int main()
{
 cin>>n;
 for (i=0; i<n; i++) {
 cin>>v[i];
 }
 for (i=0; i<n; i++) {
    if(v[i] % 2 == 0){
        v[i] = 0;
    }
 }
 for (i=0; i<n; i++) {
 if (v[i]!=0) {
 v[poz++]=v[i];
 }
 }
 /*for (; poz<=n; poz++) {
 v[poz]=0;
 }*/
 i = 0;
 while(v[i] != 0) {
 cout<<v[i]<<' ';
 i++;
 }
 return 0;
}
