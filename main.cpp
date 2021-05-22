// matricea de adiacenta dupa o lista de arce

#include <iostream>
#include <fstream>

using namespace std;

ifstream f("graf.txt");
ofstream g("iesire.txt");

int a[51][51], n, m;

void citire() {
    int i, j;
    f >> n;
    while (f >> i >> j) {
        a[i][j] = 1;
        m++;
    }
}

void afisare() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            g << a[i][j] << " ";
        g << endl;
    }
}

int main() {
    citire();
    afisare();
}
