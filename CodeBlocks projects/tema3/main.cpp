#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    long long n, l;
    fin.open("repetat.in");
    fin>>n;
    fin.close();
    l = n % 10;
    while(n>0){
        if(n%10 == l){
            n = n / 10;
        }
        else{
          n = 0;
          fout.open("repetat.out");
          fout<<"NU";
          fout.close();
          return 0;
        }
    }
    fout.open("repetat.out");
    fout<<"DA";
    fout.close();
    return 0;
}
