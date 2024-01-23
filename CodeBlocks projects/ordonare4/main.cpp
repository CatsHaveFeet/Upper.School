#include <fstream>

using namespace std;

int main()
{
    ifstream fin("ordonare4.in");
    ofstream fout("ordonare4.in");

    int a, b, c, d, e;
    fin>>a>>b>>c>>d;
    if(a>b && a>c && a>d){
        if(b>c && b>d) {
            if(c>d) {
                fout<<a<<b<<c<<d;
                return 0;
            }
            else {
                e = c;
                c = d;
                d = e;
            }
        }
        else if(c>d && c>b) {
            if(b>d){
                e = b;
                b = c;
                c = e;
            }
            else {
                e = d;
                d = b;
                b = c;
                c = e;
            }
        }
        else {
            if(b>c) {
                e = b;
                b = d;
                d = c;
                c = e;
            }
        }
    }
    else if(b>a && b>c && b>d) {
            e = b;
            a = b;
            b = e;
            if(b>c && b>d) {
                if(c>d) {
                    fout<<a<<b<<c<<d;
                    return 0;
                }
                else {
                    e = c;
                    c = d;
                    d = e;
                }
            }
            else if(c>d && c>b) {
                if(b>d){
                    e = b;
                    b = c;
                    c = e;
                }
                else {
                    e = d;
                    d = b;
                    b = c;
                    c = e;
                }
            }
            else {
                if(b>c) {
                    e = b;
                    b = d;
                    d = c;
                    c = e;
                }
            }
    }
    else if(c>a && c>b && c>d) {
            e = c;
            a = c;
            c = e;
            if(b>c && b>d) {
                if(c>d) {
                    fout<<a<<b<<c<<d;
                    return 0;
                }
                else {
                    e = c;
                    c = d;
                    d = e;
                }
            }
            else if(c>d && c>b) {
                if(b>d){
                    e = b;
                    b = c;
                    c = e;
                }
                else {
                    e = d;
                    d = b;
                    b = c;
                    c = e;
                }
            }
            else {
                if(b>c) {
                    e = b;
                    b = d;
                    d = c;
                    c = e;
                }
            }
    }
    else if(d>a && d>c && d>b) {
            e = d;
            a = d;
            d = e;
            if(b>c && b>d) {
                if(c>d) {
                    fout<<a<<b<<c<<d;
                    return 0;
                }
                else {
                    e = c;
                    c = d;
                    d = e;
                }
            }
            else if(c>d && c>b) {
                if(b>d){
                    e = b;
                    b = c;
                    c = e;
                }
                else {
                    e = d;
                    d = b;
                    b = c;
                    c = e;
                }
            }
            else {
                if(b>c) {
                    e = b;
                    b = d;
                    d = c;
                    c = e;
                }
            }
    }
    fout<<a<<b<<c<<d;
    fin.close();
    fout.close();
    return 0;
}
