#include <iostream>

using namespace std;

int main()
{
    int h, v; // variabile de intrare
    double g; // greutatea, valoare calculata
    cout << "Inaltimea (cm): ";
    cin >> h; // se citeste inaltimea
    cout << "Varsta (ani): ";
    cin >> v; // se citeste varsta
    g = 50.0 + 0.75*(h-150) + 0.25*(v - 20);
    cout << "Greutatea ideala (barbat): " << g << " kg" << endl;
    cout << "Greutatea ideala (femeie): " << 0.9 * g << " kg" << endl;
    cin.get();
    return 0;
}
