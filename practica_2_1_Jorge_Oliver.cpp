#include <iostream>

using namespace std;

int main()
{
    int numero, pos1=0, pos2=1, serie=1;
    cout << "Programa que imprime al usuario el valor de la serie de Fibonacci a partir de un numero ingresado" << endl;
    cout << "Ingresa un número para calcular el valor de la serie Fibonacci:";
    cin >> numero;

    cout << "0, 1, ";
    for(int i = 1; i <= numero; i++ ){
        serie = pos1 + pos2; //suma los primeros valores de la serie
        pos1 = pos2;        // reemplaza la primer posicion por la segunda
        if(i == numero){
            cout << serie << "."; //Si es la ultima posicion imprime un punto al final de la serie
        }else{
            cout << serie << ", ";   //Imprime el valor actual de la serie Fibonacci
        }

        pos2 = serie;   //reemplaza el valor de la posicion 2 por el valor actual de la serie Fibonacci

    }
    return 0;
}
