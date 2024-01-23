#include <fstream>

using namespace std;

int matrix[100][100];
int suml[100];
int sumc[100];

int main()
{
    ifstream fin("ture.in");
    ofstream fout("ture.out");

    int n, max1 = 0, max2 = 0, l1 = 0, l2 = 0, c1 = 0, c2 = 0, sumtot;
    fin >> n;
    for (int i = 0; i < n; i++)
    {
	    for (int j = 0; j < n; j++)
	    {
            fin >> matrix[i][j];
            suml[i] += matrix[i][j];
            sumc[j] += matrix[i][j];
	    }
    }
    for (int i = 0; i < n; i++)
    {
	    for (int j = 0; j < n; j++)
	    {
            int sum = suml[i] + sumc[j] - matrix[i][j] - matrix[i][j];
            if (sum >= max1)
            {
                max2 = max1;
                l2 = l1;
                c2 = c1;
                max1 = sum;
                l1 = i;
                c1 = j;
            }
            else if (sum > max2)
            {
                max2 = sum;
                l2 = i;
                c2 = j;
            }
	    }
    }
    sumtot = max1 + max2;
    if (l1 == l2)
    {
	    for (int i = 0; i <= l1; i++)
	    {
            if (i != c1 && i != c2)
            {
                sumtot -= matrix[l1][i];
            }
	    }
    }
    else if (c1 == c2)
    {
	    for (int i = 0; i <= c1; i++)
	    {
		    if(i != l1 && i != l2)
		    {
                sumtot -= matrix[i][c1];
		    }
	    }
    }
    else
    {
        sumtot -= matrix[l1][c2] + matrix[l2][c1];
    }
															//nu am vazut partea asta in rezolvarea de la curs
    fout << sumtot;                                         //sumtot este suma maximelor minus valorile din matrice
															//unde se intersecteaza liniile si coloanele max1 si max2
															//sincer nu am gasit nicaieri in cerinta sa se precizeze asa ceva,
															//dar facand suma manual trebuiea sa dea 44 la exemplul de pe pbinfo si nu 40,
															//iar valorile unde se intersecateaza sunt fix 1 si 3,
															//asa ca am tras singur concluzia ca acestea nu sunt incluse
    return 0;                                               //totusi am primit numai 20 de puncte ;(
}