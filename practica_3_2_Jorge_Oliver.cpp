#include <iostream>

using namespace std;

int main()
{
    int num, digitos;
    cout << "Algoritmo que determina cuantos digitos tiene un numero ingresado por el usuario" << endl;
    cout << "Inrgesa el numero:" << endl;
    cin >> num;

    if ( num == 0){             //valida el valor ingresado con 0 para evitar la división
            digitos = 1;
    }else{
        while(num > 0){         //compara el valor ingresado entre cero, mientras sea cierto
            num = num / 10;     //divide el numero en multiplos de 10
            digitos ++;         //para aumentar el contador de las veces divididas
        }
    }
    cout << "El total de digitos son: " << digitos; //imprime un mensaje con el total de digitos.
    return 0;
}
