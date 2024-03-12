#include <iostream>
#include <Windows.h>
#include <unistd.h>

using namespace std;


int main()
{
    int a, b, c;
    int matrizA[20][20], matrizB[20][20], matrizC[20][20];
    cout << "Programa que suma dos matrices e imprime el resultado." << endl;
    sleep(4);
    cout << "Recuerda que para multiplicar dos matrices es necesario que\nel numero de columnas de M1 debe ser igual al numero de filas de M2." << endl;
    sleep(4);

        cout << "\nIngresa las filas de la Matriz A: ";
        cin >> a;
        cout << "Ingresa las columnas de la Matriz A:";
        cin >> b;
        cout << "El numero de filas de la matriz B es igual a las columnas de la matriz A: " << b << endl;
        cout << "Ingresa las columnas de la Matriz B:";
        cin >> c;

    cout << "INGRESO DE DATOS DE LA PRIMER MATRIZ:" << endl;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cout << "Ingresar valor para [" << i << "][" << j << "]: " << endl;
            cin >> matrizA[i][j];
        }
    }


    cout << "INGRESO DE DATOS DE LA SEGUNDA MATRIZ:" << endl;
    for(int i = 0; i < b; i++){
        for(int j = 0; j < c; j++){
            cout << "Ingresar valor para [" << i << "][" << j << "]: " << endl;
            cin >> matrizB[i][j];
        }
    }

    for(int i=0; i<a; ++i){
        for(int j=0; j<c; ++j){
            matrizC[i][j] = 0;
        }
    }

    int matrizR[10][10];
    cout << "CALCULANDO MATRIZ...  " << endl;

    for (int i = 0; i < a; i++){
        for (int j = 0; j < c; j++){
            for (int k = 0; k < b; k++){
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    sleep(1);
    cout << ".";
    sleep(1);
    cout << ".";
    sleep(1);
    cout << ".";
    sleep(1);
    system("cls");


    cout << "LA MATRIZ RESULTADO ES: " << endl;


    for(int i = 0; i < a; i++){
        for(int j = 0; j < c; j++){
            cout << matrizC[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
