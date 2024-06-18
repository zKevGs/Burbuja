#include <iostream>
#include <string>
#include <vector>


using namespace std;


int main(){

int filas = 3;
int columnas = 3;
int aux[filas][columnas];

int ma[filas][columnas];
int ma2[filas][columnas];

for (int i = 0; i<filas; i++){
    for (int j = 0; j<columnas; j++){

     cout << "ingrese el valor [" << i+1 << "] [" << j+1 << "] ";
     cin >> ma[i][j];

    }
}

for (int i = 0; i<filas; i++){
    for (int j = 0; j<columnas; j++){

       cout << "de la segunda matris ingrese el valor [" << i+1 << "] [" << j+1 << "] ";
     cin >> ma2[i][j];

    }
}

for (int i = 0; i<filas; i++){
    for (int j = 0; j<columnas; j++){

    if (ma[i][j]>ma2[i][j]){
        aux[filas][columnas] = ma[i][j];
        ma[i][j] = ma2[i][j];
        ma2[i][j] = aux[filas][columnas];
    }

    }
        }

for (int i = 0; i<filas; i++){
    for (int j = 0; j<columnas; j++){

        cout << "ambas matrices ordenadas es asi: "  ma[i][j] << " ";


    }
}
return 0;
}
