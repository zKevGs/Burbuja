#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros;
    int cantidad;

    cout << "�Cu�ntos n�meros deseas ingresar? ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; ++i) {
        int numero;
        cout << "Ingresa el n�mero " << i + 1 << ": ";
        cin >> numero;
        numeros.push_back(numero);
    }

    if (numeros.size() >= 3) {
        for (int i = 2; i < numeros.size() - 1; ++i) {
            numeros[i] = numeros[i + 1];
        }
        numeros.pop_back(); // Reduce el tama�o del vector
        cout << "El tercer n�mero ha sido eliminado." << endl;
    } else {
        cout << "No se puede eliminar el tercer n�mero porque hay menos de tres n�meros." << endl;
    }

    cout << "Los n�meros restantes son: ";
    for (int i = 0; i < numeros.size(); ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
