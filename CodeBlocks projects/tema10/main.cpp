#include <fstream>

using namespace std;

int main()
{
    ifstream fin("cabina.in");
    ofstream fout("cabina.out");

    int n, alt, pers, nr_pers = 0, ltr = 0, spcl = 0, prev_alt;
    bool urcare = false, coborare = false;
    fin>>n>>prev_alt>>pers;
    nr_pers = nr_pers + pers;
    for(int i = 0; i < n; i++){
        fin>>alt>>pers;
        if(urcare == false && coborare == false){
            if(alt > prev_alt){
                urcare = true;
                ltr = ltr + (alt - prev_alt) * 3;
            }
            else{
                coborare = true;
                ltr = ltr + prev_alt - alt;
            }
        }
        else{
            if(urcare == true){
                if(alt < prev_alt){
                    urcare = false;
                    coborare = true;
                    spcl++;
                    ltr = ltr + prev_alt - alt;
                }
                else{
                    ltr = ltr + (alt - prev_alt) * 3;
                }
            }
            else if(coborare == true){
                if(alt > prev_alt){
                    coborare = false;
                    urcare = true;
                    spcl++;
                    ltr = ltr + (alt - prev_alt) * 3;
                }
                else{
                    ltr = ltr + prev_alt - alt;
                }
            }
        }
        nr_pers = nr_pers + pers;
        prev_alt = alt;
    }
    fout<<nr_pers<<endl<<ltr<<endl<<spcl;

    return 0;
}
