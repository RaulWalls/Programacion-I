#include <iostream>

using namespace std;

int main()
{
    int num1, num2, mayor, menor, par = 0, impar = 0;
    cout << "Programa que calcula el numero de numeros Pares e Impares entre dos numeros ingresados por el usuario!" << endl;
    cout << "Ingresa el primer numero: " << endl;
    cin >> num1;
    cout << "Ingresa el segundo numero: " << endl;
    cin >> num2;

    if(num1 > num2){       //compara ambos valores capturados por el usuario
        mayor = num1;      //asigna a la variable mayor el numero 1
        menor = num2;      //asigna a la variable menor el numero 2
    }else{
        menor = num1;      //asigna a la variable menor el numero 1
        mayor = num2;      //asigna a la variable mayor el numero 2
    }
    for(int i = menor; i <= mayor; i++){    //asigna a i el valor del numero menor para que comience
                                            //desde ese numero hasta llegar al numero mayor
        if(i%2 == 0){                       //compara si la iteración es par
            par++; //incrementa el total de números pares
        }
        if(i%2 == 1){
            impar++; //incrementa el total de números impares
        }
    }
    cout << "El total de números pares entre " << menor << " y " << mayor <<" es: " << par << endl;
    cout << "El total de números impares entre " << menor << " y " << mayor <<" es: " << impar << endl;

    return 0;
}
