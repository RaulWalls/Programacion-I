#include <iostream>
#include <Windows.h>
#include <unistd.h>

using namespace std;


int main()
{
    int a, b, c, d, x = 2;
    cout << "Programa que suma dos matrices e imprime el resultado" << endl;
    sleep(2);
    cout << "Recuerda que para multiplicar dos matrices es necesario que\nel numero de columnas de M1 debe ser igual al numero de filas de M2." << endl;
    sleep(2);

    do{
        cout << "Ingresa el tamanio de la Matriz 1:" << endl;
        cin >> a;
        cout << "X\n";
        cin >> b;
        cout << "\n\nIngresa el tamanio de la Matriz 2: " << endl;
        cin >> c;
        cout << "X\n";
        cin >> d;
        if (b == c){
            cout << "La matriz es valida!\n";
            sleep(2);
            x = 1;
            system("cls");
        }else{
            cout << "La no matriz es valida!\n";
            sleep(2);
        }
    }while(x != 1);


    int matriz1[a][b];
    int matriz2[c][d];

    cout << "INGRESO DE DATOS DE LA PRIMER MATRIZ:" << endl;
    for(int i = 0; i <= a; i++){
        for(int j = 0; j <= b; j++){
            cout << "Ingresar valor para [" << i << "][" << j << "]: " << endl;
            cin >> matriz1[i][j];
        }
    }

    cout << "INGRESO DE DATOS DE LA SEGUNDA MATRIZ:" << endl;
    for(int i = 0; i <= c; i++){
        for(int j = 0; j <= d; j++){
            cout << "Ingresar valor para [" << i << "][" << j << "]: " << endl;
            cin >> matriz2[i][j];
        }
    }
    int matrizR[a][d];

    cout << "CALCULANDO MATRIZ...  " << endl;
    sleep(1);
    cout << ".";
    sleep(1);
    cout << ".";
    sleep(1);
    cout << ".";
    sleep(1);
    system("cls");
    cout << "LA MATRIZ RESULTADO ES: " << endl;

    for (int i = 0; i < a; i++){
        for (int j = 0; j < d; j++){
            if(j==d){
                cout << matrizR[i][j] << " ";
            }else{
                cout << matrizR[i][j] << endl;
            }
        }
    }

    return 0;
}