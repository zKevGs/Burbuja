#include <iostream>
#include <string>
#include <conio.h>


using namespace std;


int main(){

    int largo, numero;

cout << "ingrese el largo del array: ";
cin >> largo;


int numeros[largo];
int aux;

for(int i= 0; i<largo; i++){

    cout << "ingrese un numero para rellenar el array: ";
    cin >> numeros[i];

}



for (int i = 0; i<5; i++){
    for (int j = 0; j<5;j++){
        if(numeros[i]<numeros[j]){
            aux = numeros[i];
            numeros[i] = numeros[j];
            numeros[j]= aux;
        }
    }
}

for (int i = 0; i<5; i++){
    cout << numeros[i] << " ";
}



return 0;
}
