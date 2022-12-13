#include <iostream>
#include <fstream>

using namespace std;

int sunkiausia(int n, ifstream& duom)
{
    int y = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        duom >> z;
        if (y < z)
        {
            y = z;
        }
    }
    return y;
}

void lengvos(int n, int x, ofstream& rez, ifstream& duom)
{
    int z = 0, k = 0;
    duom >> n;
    for (int i = 0; i < n; i++)
    {
        duom >> z;
        if (x >= z + z)
        {
            k++;
        }
    }
    rez << k;
}

int main()
{
    ifstream duom("Duomenys.txt");
    ofstream rez("Rezultatai.txt");
    int n, x;
    duom >> n;
    x = sunkiausia(n, duom);
    duom.close();
    duom.open("Duomenys.txt");
    rez << x << ' ';
    lengvos(n, x, rez, duom);
    rez.close();
    return 0;
}
