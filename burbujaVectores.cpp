#include <iostream>
#include <string>
#include <vector>


using namespace std;


int  main(){

int largo, numero;
int aux = 0;

cout << "ingrese el largo del array: ";
cin >> largo;

vector <size_t> numeros;

for(int i = 0; i<largo;i++){

    cout << "ingrese el numero " << i+1 << ": ";
    cin >> numero;
    if(i != 2){
        numeros.push_back(numero);
    }

}

for (int i = 0; i<largo; i++){
    for (int j = 0; j<largo;j++){
        if(numeros[i]<numeros[j]){
            aux = numeros[i];
            numeros[i] = numeros[j];
            numeros[j]= aux;
        }
    }
}

for (int i = 0; i<numeros.size(); i++){

    cout << numeros[i];

}

return 0;
}
